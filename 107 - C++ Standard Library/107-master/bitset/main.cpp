#include <bitset>
#include <iostream>

int main() {
  // there are different ways to construct bitsets
  std::bitset<8> my_empty_byte;
  std::bitset<8> my_byte(128);
  std::bitset<8> another_byte(0x0F);
  std::bitset<8> yet_another_byte(std::string("01010101"));

  // can print out the values
  std::cout << my_empty_byte << std::endl;
  std::cout << my_byte << std::endl;
  std::cout << another_byte << std::endl;
  std::cout << yet_another_byte << std::endl;

  std::cout << "Now modify a bitset:\n";
  // we can modify the bitsets
  my_byte.reset(7);  // clear bit 7
  my_byte.set(0);    // set bit 0
  my_byte.flip(1);   // flip bit 1
  std::cout << my_byte << std::endl;

  // we can convert a bitset to an integer (unsigned long)
  unsigned long byte_value = my_byte.to_ulong();
  std::cout << "The byte has a value " << byte_value << std::endl;
  // and also to a string
  std::string byte_string = my_byte.to_string();
  std::cout << "The byte string is " << byte_string << std::endl;
}