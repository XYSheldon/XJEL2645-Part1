#include <complex>
#include <iostream>

int main()
{
    double ra,im;
    std::cout << "Input Impedance (Real Part):";
    std::cin>>ra;
    std::cout << "Input Impedance (Imgaginary Part):";
    std::cin>>im;
    std::complex<double> z(ra,im);

    double modulus,angle;
    std::cout << "Input Voltage (Modulus):";
    std::cin>>modulus;
    std::cout << "Input Voltage (Phase Angle):";
    std::cin>>angle;
    std::complex<double> v=std::polar(modulus,angle);

    std::complex<double> i=v/z;
    std::cout <<"Current: "<< std::abs(i) <<" A, with a phase angle: "<<std::arg(i)<<std::endl;
    return 0;
}