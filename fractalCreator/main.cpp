//
//  main.cpp
//  fractalCreator
//
//  Created by 小林和宏 on 6/21/16.
//  Copyright © 2016 mycompany. All rights reserved.
//

#include <iostream>

#include "FractalCreator.hpp"
#include "RGB.hpp"
#include "Zoom.hpp"

using namespace std;
using namespace caveofprogramming;

int main() {
        
    FractalCreator fractalCreator(800, 600);
    
    fractalCreator.addRange(0.0, RGB(0, 0, 0));
    fractalCreator.addRange(0.3, RGB(255, 0, 0));
    fractalCreator.addRange(0.5, RGB(255, 255, 0));
    fractalCreator.addRange(1.0, RGB(255, 255, 255));
        
    fractalCreator.addZoom(Zoom(295, 202, 0.1));
    fractalCreator.addZoom(Zoom(312, 304, 0.1));
    fractalCreator.run("test.bmp");
    
    cout << "Finished." << endl;
    return 0;
}
