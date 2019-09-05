#include <iostream>

int main() {
  // initialise variables with values
  double a = 0.0, b = 0.0;
  std::cout << "a = " << a << ", b = " << b << std::endl;
  std::cout << "&a = " << &a << ", &b = " << &b << std::endl;

  // create a 'null' pointer - nullptr is C++11
  // note the type must match the datatype of the variable
  // the pointer is going to point to
  double *pointer = nullptr;
  std::cout << "Pointer initialised to: " << pointer << std::endl;

  // now point it to 'a' and use it to give 'a' a value
  pointer = &a;
  std::cout << "Pointer now pointing to 'a': " << pointer << std::endl;
  *pointer = 99.9;
  // now point it to 'b' and do the same
  pointer = &b;
  std::cout << "Pointer now pointing to 'b':" << pointer << std::endl;
  *pointer = 77.7;
  // print 'a' and 'b' to check values have indeed changed
  std::cout << "a = " << a << ", b = " << b << std::endl;
}