//
//  Mandelbrot.cpp
//  fractalCreator
//
//  Created by 小林和宏 on 6/22/16.
//  Copyright © 2016 mycompany. All rights reserved.
//

#include <complex>
#include "Mandelbrot.hpp"

using namespace std;

namespace caveofprogramming {

Mandelbrot::Mandelbrot() {

}

Mandelbrot::~Mandelbrot() {
    
}

int Mandelbrot::getIterations(double x, double y) {
    
    complex<double> z = 0;
    complex<double> c(x, y);
    
    int iterations = 0;
    
    while(iterations < MAX_ITERATIONS) {
        z = z*z + c;
        
        if(abs(z) > 2) {
            break;
        }
        
        iterations++;
    }
    
    return iterations;
}



    
    
}