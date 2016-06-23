//
//  main.cpp
//  fractalCreator
//
//  Created by 小林和宏 on 6/21/16.
//  Copyright © 2016 mycompany. All rights reserved.
//

#include <iostream>
#include <cstdint>
#include <memory>
#include <math.h>
#include "Bitmap.hpp"
#include "Mandelbrot.hpp"
#include "ZoomList.hpp"
#include "FractalCreator.hpp"

using namespace std;
using namespace caveofprogramming;

//int main(int argc, const char * argv[]) {
int main() {
    
    int const WIDTH = 800;
    int const HEIGHT = 600;
    
    Bitmap bitmap(WIDTH, HEIGHT);
    
    double min = 999999;
    double max = -999999;
    
    ZoomList zoomList(WIDTH, HEIGHT);
    zoomList.add(Zoom(WIDTH/2, HEIGHT/2, 4.0/WIDTH));
    zoomList.add(Zoom(295, HEIGHT-202, 0.1));
    zoomList.add(Zoom(312, HEIGHT-304, 0.1));
    
    unique_ptr<int[]> histogram(new int[Mandelbrot::MAX_ITERATIONS]{0});
    unique_ptr<int[]> fractal(new int[WIDTH*HEIGHT]{0});
    
    bitmap.setPixel(WIDTH/WIDTH, HEIGHT/2, 255, 255, 255);
    
    for(int y=0; y<HEIGHT; y++) {
        for(int x=0; x<WIDTH; x++) {

            pair<double, double> coords = zoomList.doZoom(x, y);
            
            
            int iterations = Mandelbrot::getIterations(coords.first, coords.second);
            
            fractal[y * WIDTH + x] = iterations;
            
            if(iterations != Mandelbrot::MAX_ITERATIONS) {
                histogram[iterations]++;
            }
            
        }
    }
    
    cout << endl;
    
    int count = 0;
    for(int i=0; i<Mandelbrot::MAX_ITERATIONS; i++) {
        cout << histogram[i] << " " << flush;
        count += histogram[i];
    }
    
//    cout << endl;
//    
//    cout << count << "; " << WIDTH*HEIGHT << endl;
//    
//    cout << endl;
//    
//    cout << min << ", " << max << endl;
    
    int total = 0;
    for (int i=0; i<Mandelbrot::MAX_ITERATIONS; i++) {
        total += histogram[i];
    }
    for(int y=0; y<HEIGHT; y++) {
        for(int x=0; x<WIDTH; x++) {
            
            uint8_t red = 0;
            uint8_t green = 0;
            uint8_t blue = 0;
            
            int iterations = fractal[y * WIDTH + x];
            
            if (iterations != Mandelbrot::MAX_ITERATIONS) {
                
                double hue = 0.0;
                for(int i=0; i<= iterations; i++) {
                    hue += ((double)histogram[i])/total;
                }
                
                green = hue * 255;
            }
            
            bitmap.setPixel(x, y, red, green, blue);

        }
    }


    bitmap.write("test.bmp");
    
    cout << "Finished." << endl;
    return 0;
}
