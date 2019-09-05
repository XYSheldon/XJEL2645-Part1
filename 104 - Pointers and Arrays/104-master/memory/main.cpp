#include <iostream>

int main() {
  // create a 32-bit (4 byte) variable
  unsigned int variable = 0xABCDEF89;
  std::cout << std::uppercase;  // print hex values in uppercase
  std::cout << "Variable value is 0x" << std::hex << variable << std::endl;
  std::cout << "Size of variable is " << sizeof(variable) << " bytes\n";
  std::cout << "Address of variable is " << &variable << std::endl;

  // create a char (byte) pointer and point it at the variable address
  // we need to cast the variable to a char to match the pointer type
  unsigned char *pointer = (unsigned char *)&variable;

  // iterate through each byte in the 4-byte integer variable
  std::cout << "-----------------------\n";
  for (int i = 0; i < 4; i++) {
    // now print out the byte at that address address
    std::cout << "| " << (unsigned int *)pointer << " | ";
    std::cout << (unsigned int)*pointer << " |\n";
    // increment the pointer to point at the next address
    pointer++;
  }
  std::cout << "-----------------------\n";
}