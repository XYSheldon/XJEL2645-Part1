#include <iostream>

int main() {
  // initialse an array with values
  int array[5] = {100, 101, 102, 103, 104};
  // iterate over the array and print the values
  for (int i = 0; i < 5; i++) {
    std::cout << "array[" << i << "] = " << array[i] << std::endl;
  }
  // since C++11, we can use range-based for loops. Note we don't
  // have to know the length of the array, however we don't
  // automatically get the array index like a traditional
  // for loop
  for (int value : array) {
    std::cout << value << std::endl;
  }
}