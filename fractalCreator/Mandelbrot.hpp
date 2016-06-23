//
//  Mandelbrot.hpp
//  fractalCreator
//
//  Created by 小林和宏 on 6/22/16.
//  Copyright © 2016 mycompany. All rights reserved.
//

#ifndef Mandelbrot_hpp
#define Mandelbrot_hpp

namespace caveofprogramming {

class Mandelbrot {
    
public:
    static const int MAX_ITERATIONS = 1000;
    
public:
    Mandelbrot();
    virtual ~Mandelbrot();
    
    static int getIterations(double x, double y);
};
    
}
#endif /* Mandelbrot_hpp */
