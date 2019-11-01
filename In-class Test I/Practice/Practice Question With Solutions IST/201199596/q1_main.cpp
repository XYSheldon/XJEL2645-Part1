// DO NOT MODIFY THIS FILE!!!!!!
#include <cmath>  // for std::abs
#include <iostream>
#include <limits>
#include "q1.h"

// checks whether 2 double are almost equal
bool almost_equal(double a, double b) {
  // == may return true, but also check whether the relative difference
  // between the numbers is less than a small threshold
  return a == b || (std::abs(a - b) / std::max(a, b) <= 1e-6);
}

// function to test sum
bool test(int a, bool expected) {
  bool val = is_even(a);  // calc value and compare to expected

  if (val == expected) {
    std::cout << "passed\n";
    return true;
  } else {
    std::cout << "FAILED! Returned " << val << " (expecting " << expected
              << ").\n";
    return false;
  }
}

// function to run the tests
int run_tests() {
  // initialise counter for number of tests passed
  int passed = 0;
  // do various tests
  if (test(0, true)) passed++;
  if (test(-1, false)) passed++;
  if (test(4343434, true)) passed++;
  if (test(78657567, false)) passed++;
  if (test(-999999, false)) passed++;
  return passed;
}

int main() {
  std::cout << "\nTesting...\n\n";
  int passed = run_tests();
  std::cout << "\nTotal passed:\n" << passed;
}