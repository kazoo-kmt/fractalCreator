//
//  RGB.cpp
//  fractalCreator
//
//  Created by 小林和宏 on 6/22/16.
//  Copyright © 2016 mycompany. All rights reserved.
//

#include "RGB.hpp"

namespace caveofprogramming {
RGB::RGB(double r, double g, double b): r(r), g(g), b(b) {

}

RGB operator-(const RGB& first, const RGB& second) {
    return RGB(first.r - second.r, first.g - second.g, first.b - second.b);
}
    
}