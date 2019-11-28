#ifndef Q3_H
#define Q3_H

#include <complex>

#define PI 3.14159265359

struct Polar {
    double magnitude;
    double phase;
};

// DO NOT MODIFY THIS FILE!

// API: Calculates the total impedance Z of a series RLC circuit
// Params:
// R - resistance in ohms
// L - inductance in Henry's
// C - capacitance in Farad's
// f - frequency in Hz
// Returns:
// The total impedance in Polar form (magnitude and phase)
// Notes:
// Zr = R
// Zl = jwL
// Zc = -1/wC
// where w = 2 pi f
// Zt = Zr + Zl + Zc
Polar rlc_impedance(double R, double L, double C, double f);

#endif  // Q3_H