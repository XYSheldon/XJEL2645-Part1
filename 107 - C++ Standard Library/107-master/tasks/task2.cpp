#include <bitset>
#include <iostream>

int main() {
  std::bitset<8> abyte;
  std::cout << "Input a byte in binary: ";
  std::cin >> abyte;
  // we can convert a bitset to an integer (unsigned long)
  unsigned long value = abyte.to_ulong();
  std::cout << "The byte has a value " << value << std::endl;

}