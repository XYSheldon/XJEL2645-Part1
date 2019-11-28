#include "q2.h"

// import any required libraries here

float resistor_network(const float values[], int n, char type) {
    if (type == 's' || type == 'S')
    {
        float tt = 0;
        for (int i=0;i<n;i++)
        {
            tt+=values[i];
        }
        return tt;
    }
    if (type == 'p' || type == 'P')
    {
        float tt = 0 ;
        for (int i=0;i<n;i++){
            tt+=(1.0/values[i]);

        }
        return 1.0/tt;
    }
    return -1.0;
}