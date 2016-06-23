//
//  RGB.hpp
//  fractalCreator
//
//  Created by 小林和宏 on 6/22/16.
//  Copyright © 2016 mycompany. All rights reserved.
//

#ifndef RGB_hpp
#define RGB_hpp

namespace caveofprogramming {

struct RGB {
    double r;
    double g;
    double b;    
    RGB(double r, double g, double b);
};
 
    RGB operator-(const RGB& first, const RGB& second);
    
}
#endif /* RGB_hpp */
