//
//  FractalCreator.hpp
//  fractalCreator
//
//  Created by 小林和宏 on 6/22/16.
//  Copyright © 2016 mycompany. All rights reserved.
//

#ifndef FractalCreator_hpp
#define FractalCreator_hpp

#include <string>
#include "Zoom.hpp"

using namespace std;

namespace caveofprogramming {
    
class FractalCreator {
public:
    FractalCreator(int width, int height);
    virtual ~FractalCreator();
    
    void calculateIteration();
    void drawFractal();
    void addZoom(const Zoom& zoom);
    void writeBitmap(string name);
};

}

#endif /* FractalCreator_hpp */
