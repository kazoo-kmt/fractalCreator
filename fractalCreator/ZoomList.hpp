//
//  ZoomList.hpp
//  fractalCreator
//
//  Created by 小林和宏 on 6/22/16.
//  Copyright © 2016 mycompany. All rights reserved.
//

#ifndef ZoomList_hpp
#define ZoomList_hpp

#include "Zoom.hpp"
#include <vector>
#include <utility>

using namespace std;

namespace caveofprogramming {

class ZoomList {
private:
    double m_xCenter{0};
    double m_yCenter{0};
    double m_scale{1.0};
    
    int m_width{0};
    int m_height{0};
    vector<Zoom> zooms;
    
public:
    ZoomList(int width, int height);
    void add(const Zoom& zoom);
    pair<double, double> doZoom(int x, int y);
};

}
#endif /* ZoomList_hpp */
