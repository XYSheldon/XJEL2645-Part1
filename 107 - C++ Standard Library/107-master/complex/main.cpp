#include <complex>
#include <iostream>

int main() {
  std::complex<double> v(2.0, -1.0);
  std::cout << "Real part = " << v.real() << std::endl;
  std::cout << "Imaginary part = " << v.imag() << std::endl;

  std::cout << "Absolute value = " << std::abs(v) << std::endl;
  std::cout << "Phase angle = " << std::arg(v) << std::endl;
}