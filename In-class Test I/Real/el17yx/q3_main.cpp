// DO NOT MODIFY THIS FILE!!!!!!
#include <iostream>
#include "q3.h"

int main() {
  std::cout << "Question 3\n";
  Polar z = rlc_impedance(20,1e-6,10e-6,1e3);
  std::cout << "Z = " << z.magnitude << "," << z.phase << std::endl; 
  z = rlc_impedance(20,0,0,1e8);
  std::cout << "Z = " << z.magnitude << "," << z.phase << std::endl; 
  z = rlc_impedance(0,0,1,1e8);
  std::cout << "Z = " << z.magnitude << "," << z.phase << std::endl; 
  z = rlc_impedance(0,1,0,1e8);
  std::cout << "Z = " << z.magnitude << "," << z.phase << std::endl; 
}