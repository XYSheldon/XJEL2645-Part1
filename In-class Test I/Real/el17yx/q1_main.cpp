// DO NOT MODIFY THIS FILE!!!!!!
#include <iostream>
#include "q1.h"

int main() {
  std::cout << "Question 1\n";
  float output = calculator(3.5,1.4,'+');
  std::cout << "Output = " << output << std::endl;
  output = calculator(3.5,1.4,'-');
  std::cout << "Output = " << output << std::endl;
  output = calculator(3.5,1,' ');
  std::cout << "Output = " << output << std::endl;
  output = calculator(3.5,1.4444,'/');
  std::cout << "Output = " << output << std::endl;
  
}