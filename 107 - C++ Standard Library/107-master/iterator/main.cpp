#include <iostream>
#include <string>

int main() {
  // create a string
  std::string alphabet = "abcdefghijklmnopqrstuvwxyz";

  // the 'old' C-like way of iterating over the string would be
  // something like this
  for (unsigned int i = 0; i < alphabet.size(); i++) {
    std::cout << alphabet[i] << std::endl;
  }

  // the 'new' C++ way of iterating through a container (e.g. string, array)
  // is to use an 'standard template library' (STL) iterator
  for (std::string::iterator i = alphabet.begin(); i < alphabet.end(); i++) {
    std::cout << *i << std::endl;
  }
}