// DO NOT MODIFY THIS FILE!!!!!!
#include <iostream>
#include "q2.h"

int main() {
  std::cout << "Question 2\n";
  float values[2] = {10e3,10e3};
  float r = resistor_network(values,2,'s');
  std::cout << "Output = " << r << std::endl;
  r = resistor_network(values,2,'p');
  std::cout << "Output = " << r << std::endl;
  r = resistor_network(values,2,'o');
  std::cout << "Output = " << r << std::endl;
}