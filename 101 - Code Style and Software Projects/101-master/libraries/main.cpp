#include <iostream>

// including the main header will ensure all required files are pulled in
#include "main.h"

int main() {
  int total = sum(5, 6);  // sum function defined in maths.h
  std::cout << "Sum = " << total << std::endl;
  return 0;
}