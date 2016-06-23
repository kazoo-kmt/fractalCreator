//
//  Zoom.hpp
//  fractalCreator
//
//  Created by 小林和宏 on 6/22/16.
//  Copyright © 2016 mycompany. All rights reserved.
//

#ifndef Zoom_hpp
#define Zoom_hpp

namespace caveofprogramming {

struct Zoom {
    int x{0};
    int y{0};
    double scale{0.0};
    
    Zoom(int x, int y, double scale) : x(x), y(y), scale(scale) {};
};

}

#endif /* Zoom_hpp */
