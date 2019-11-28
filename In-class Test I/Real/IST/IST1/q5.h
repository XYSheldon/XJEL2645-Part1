#ifndef Q5_H
#define Q5_H

#define PI 3.14159265359

// DO NOT MODIFY THIS FILE!

// API: Calculates the values of a function at specific points in time
// Params:
// n - number of time points in the array
// T - the period of the function (in seconds)
// Returns:
// A pointer to an array containing the values
// Notes:
// The function is
// 2 + 4sin(wt);
// where w = 2 pi f 
// and f = 1/T
// For n = 5 and T = 2, the time points would be:
// ti = 0.0, 0.5, 1.0, 1.5, 2.0
// The corresponding values would be:
// 2,6,2,-2,2

float* func(int n, float T);

#endif  // Q5_H