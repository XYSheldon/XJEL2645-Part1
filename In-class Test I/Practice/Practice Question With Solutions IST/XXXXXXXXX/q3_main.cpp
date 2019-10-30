// DO NOT MODIFY THIS FILE!!!!!!
#include <cmath>  // for std::abs
#include <iostream>
#include <limits>
#include "q3.h"

// checks whether 2 double are almost equal
bool almost_equal(double a, double b) {
  // == may return true, but also check whether the relative difference
  // between the numbers is less than a small threshold
  return a == b || (std::abs(a - b) / std::max(a, b) <= 1e-6);
}

// function to test
bool test(int array[], int n, int expected) {
  int val = min_array_value(array, n);

  if (val == expected) {
    std::cout << "passed\n";
    return true;
  } else {
    std::cout << "FAILED! " << val << " (expecting " << expected << ").\n";
    return false;
  }
}

// function to run the tests
int run_tests() {
  // initialise counter for number of tests passed
  int passed = 0;
  // do various tests
  int array1[] = {0};
  if (test(array1, 1, 0)) passed++;

  int array2[] = {1, 2, 3, 4, 5, 999999999, -999999999};
  if (test(array2, 7, -999999999)) passed++;

  int array3[] = {1, 2, 3, 4, 5, 999999999, 0};
  if (test(array3, 7, 0)) passed++;

  int array4[] = {-1, -1, -1, -1, -1};
  if (test(array4, 5, -1)) passed++;

  int array5[] = {999, 999, 999, 0, 0};
  if (test(array5, 5, 0)) passed++;

  return passed;
}

int main() {
  std::cout << "\nTesting...\n\n";
  int passed = run_tests();
  std::cout << "\nTotal passed:\n" << passed;
}