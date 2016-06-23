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
#include <cstdint>
#include <memory>
#include <math.h>
#include "Zoom.hpp"
#include "Bitmap.hpp"
#include "Mandelbrot.hpp"
#include "ZoomList.hpp"


using namespace std;

namespace caveofprogramming {
    
class FractalCreator {
private:
    int m_width;
    int m_height;
    unique_ptr<int[]> m_histogram;
    unique_ptr<int[]> m_fractal;
    Bitmap m_bitmap;
    ZoomList m_zoomList;
    int m_total{0};

public:
    FractalCreator(int width, int height);
    virtual ~FractalCreator();
    
    void calculateIteration();
    void calculateTotalIteration();
    void drawFractal();
    void addZoom(const Zoom& zoom);
    void writeBitmap(string name);
};

}

#endif /* FractalCreator_hpp */
