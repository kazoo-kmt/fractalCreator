//
//  BitmapFileHeader.h
//  fractalCreator
//
//  Created by 小林和宏 on 6/21/16.
//  Copyright © 2016 mycompany. All rights reserved.
//

#ifndef BitmapFileHeader_h
#define BitmapFileHeader_h

#include <cstdint>

#pragma pack(2)

using namespace std;

struct BitmapFileHeader {
    char header[2]{'B', 'M'};
    int32_t fileSize;
    int32_t reserved{0};
    int32_t dataOffset;
};


#endif /* BitmapFileHeader_h */
