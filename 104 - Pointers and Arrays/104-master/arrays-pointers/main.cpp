#include <iostream>

int main() {
  // initialse an array with values
  int array[5] = {100, 101, 102, 103, 104};
  // iterate over the array and print the values
  for (int i = 0; i < 5; i++) {
    std::cout << "array[" << i << "] = " << array[i] << std::endl;
  }
  // print out the address of each array element
  for (int i = 0; i < 5; i++) {
    std::cout << "address of array[" << i << "] = " << &array[i] << std::endl;
  }
  // array is equivalent to &array[0]
  std::cout << "array = " << array << std::endl;
  // we can use pointers to access the array elements
  for (int i = 0; i < 5; i++) {
    std::cout << "*(array+" << i << ") = " << *(array + i) << std::endl;
  }
}