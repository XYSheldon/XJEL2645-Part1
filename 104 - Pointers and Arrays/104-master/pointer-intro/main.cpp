#include <iostream>

int main() {
  // initialise a variable with a value
  int variable = 255;
  // create a pointer to point to the variable address using the
  // address-of operator &
  int *pointer = &variable;
  std::cout << "Variable = " << variable << std::endl;
  // print the address of the variable
  std::cout << "Variable address = " << pointer << std::endl;
  // print the value store in the variable the pointer is pointing to
  // using the dereference operator *
  std::cout << "Variable value = " << *pointer << std::endl;
}