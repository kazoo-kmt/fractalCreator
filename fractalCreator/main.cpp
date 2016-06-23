//
//  main.cpp
//  fractalCreator
//
//  Created by 小林和宏 on 6/21/16.
//  Copyright © 2016 mycompany. All rights reserved.
//

#include "FractalCreator.hpp"
#include <iostream>

using namespace std;
using namespace caveofprogramming;

int main() {
    
    int height = 600;
    FractalCreator fractalCreator(800, 600);
    
    fractalCreator.addZoom(Zoom(295, height-202, 0.1));
    fractalCreator.addZoom(Zoom(312, height-304, 0.1));
    
    fractalCreator.calculateIteration();
    fractalCreator.calculateTotalIteration();
    fractalCreator.drawFractal();
    
//    int count = 0;
//    for(int i=0; i<Mandelbrot::MAX_ITERATIONS; i++) {
//        cout << m_histogram[i] << " " << flush;
//        count += m_histogram[i];
//    }
    

    fractalCreator.writeBitmap("test.bmp");
    
    cout << "Finished." << endl;
    return 0;
}
