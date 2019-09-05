#include <iostream>

int main() {
  // when we dynamically create an array, we can specify the length
  // of the array using a variable
  int n = 10;
  int *array = new int[n];

  // iterate over the loop and set the elements to some values
  for (int i = 0; i < n; i++) {
    array[i] = i * i;
    std::cout << "array[" << i << "] = " << array[i] << std::endl;
  }
  // when we've finished, delete the memory and null the pointer to be safe
  delete[] array;
  array = nullptr;
}