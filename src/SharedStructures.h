//
//  SharedStructures.h
//  FirstMetalApp
//
//  Created by Philip Rideout on 9/30/15.
//  Copyright (c) 2015 Philip Rideout. All rights reserved.
//

#ifndef SharedStructures_h
#define SharedStructures_h

#include <simd/simd.h>

typedef struct __attribute__((__aligned__(256)))
{
    matrix_float4x4 modelview_projection_matrix;
    matrix_float4x4 normal_matrix;
} uniforms_t;

#endif /* SharedStructures_h */

