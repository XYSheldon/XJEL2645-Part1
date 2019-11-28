#include "q3.h"
#include <complex>
// Add any required libraries above

Polar rlc_impedance(double R, double L, double C, double f) {
    double w= 2*PI*f;
    std::complex<double> Zr(R,0);
    std::complex<double> Zl(0,w*L);
    std::complex<double> Zc(0,-1/(w*C));
    std::complex<double> Z;
    Z=Zr+Zl+Zc;
    Polar Zt;
    Zt.magnitude=std::abs(Z);
    Zt.phase=std::arg(Z);
    return Zt;
}