#include <iostream>

int sum_of_array(const int array[], int n);
int mean_of_array(const int array[], int n);
void square_array(int array[], int n);

int main() {
  // create array and initialise
  int array[5] = {1, 2, 3, 4, 5};
  // pass the array to the function (and its size) so we can calculate the sum
  int sum = sum_of_array(array, 5);
  std::cout << "Sum = " << sum << std::endl;
  int mean = mean_of_array(array, 5);
  std::cout << "Mean = " << mean << std::endl;
  // now pass to a function to square each value
  square_array(array, 5);
  for (int i = 0; i < 5; i++) {
    std::cout << "array[" << i << "] = " << array[i] << std::endl;
  }
  // calculate the new sum
  sum = sum_of_array(array, 5);
  std::cout << "New sum = " << sum << std::endl;
  mean = mean_of_array(array, 5);
  std::cout << "New mean = " << mean << std::endl;
}
// note that the array is described as const here so that the function cannot
// modify the contents
int sum_of_array(const int array[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += array[i];
  }
  return sum;
}
// this function needs to modify the array and so isn't const
void square_array(int array[], int n) {
  for (int i = 0; i < n; i++) {
    array[i] = array[i] * array[i];
  }
}

int mean_of_array(const int array[], int n){
  return sum_of_array(array, n)/n;
}