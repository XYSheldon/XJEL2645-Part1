#include <iostream>

// including the main header will ensure all required files are pulled in
#include "main.h"

int main()
{
  int total = sum(5, 6); // sum function defined in maths.h
  std::cout << "Sum = " << total << std::endl;
  total = product(5, 3);
  std::cout << "Product = " << total << std::endl;
  total = min(50, 2);
  std::cout << "Min = " << total << std::endl;
  total = max(60, 150);
  std::cout << "Max = " << total << std::endl;
  return 0;
}