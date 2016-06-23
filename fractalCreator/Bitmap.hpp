//
//  Bitmap.hpp
//  fractalCreator
//
//  Created by 小林和宏 on 6/21/16.
//  Copyright © 2016 mycompany. All rights reserved.
//

#ifndef Bitmap_hpp
#define Bitmap_hpp

#include <string>
#include <cstdint>
using namespace std;

namespace caveofprogramming {
    
    class Bitmap {
    private:
        int m_width{0};
        int m_height{0};
        unique_ptr<uint8_t[]> m_pPixels{nullptr};
        
    public:
        Bitmap(int width, int height);
        void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);
        bool write(string filename);
        virtual ~Bitmap();
    };
} /* namespace caveofprogramming */
#endif /* Bitmap_hpp */
