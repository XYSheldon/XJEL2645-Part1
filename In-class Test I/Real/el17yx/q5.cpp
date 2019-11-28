#include "q5.h"

#include <iostream>
#include <cmath>
// import any required libraries above

float* func(int n, float T) {
    float f = 1.0/T;
    float w= 2 * PI * f;
    float ti=0;
    float *array = new float[n];
    for (int i=0;i<n;i++)
    {
        ti=(i)*(T/(n-1));
        array[i]=2+4*sin(w*ti);
    }
    return array;
}