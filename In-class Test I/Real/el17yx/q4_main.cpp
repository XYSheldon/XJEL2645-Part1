// DO NOT MODIFY THIS FILE!!!!!!
#include <iostream>
#include "q4.h"

int main() {
  std::cout << "Question 4\n";
  std::bitset<16> x(65528);
  std::cout << jmp_mnemonic(x) << std::endl;
  x.set(0);
  std::cout << jmp_mnemonic(x) << std::endl;
  x.set(1);
  std::cout << jmp_mnemonic(x) << std::endl;
}