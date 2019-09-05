#include "tests.h"
#include <cmath>  // for std::abs
#include <iostream>
#include <limits>

// checks whether 2 double are almost equal
bool almost_equal(double a, double b) {
  // == may return true, but also check whether the relative difference
  // between the numbers is less than a small threshold
  return a == b || (std::abs(a - b) / std::max(a, b) <= 1e-6);
}

// function to test sum
bool test_sum(int a, int b, int expected) {
  std::cout << "sum(" << a << "," << b << ") : ";
  int val = sum(a, b);  // calc value and compare to expected
  if (val == expected) {
    std::cout << "passed\n";
    return true;
  } else {
    std::cout << "FAILED! " << val << " (expecting " << expected << ").\n";
    return false;
  }
}

// function to test sqr
bool test_sqr(double a, double expected) {
  std::cout << "sqr(" << a << ") : ";
  double val = sqr(a);  // calc value and compare to expected
  if (almost_equal(val, expected)) {
    std::cout << "passed\n";
    return true;
  } else {
    std::cout << "FAILED! " << val << " (expecting " << expected << ").\n";
    return false;
  }
}

// function to test min array value
bool test_min_array_value(int array[], int n, int expected) {
  std::cout << "array : ";
  int val = min_array_value(array, n);  // calc value and compare to expected
  if (val == expected) {
    std::cout << "passed\n";
    return true;
  } else {
    std::cout << "FAILED! " << val << " (expecting " << expected << ").\n";
    return false;
  }
}
// function to run the tests
int run_sqr_tests() {
  std::cout << "\nTesting sqr()...\n" << std::endl;
  // initialise counter for number of tests passed
  int passed = 0;
  // do various tests
  if (test_sqr(-1.123456789, 1.2621551568)) passed++;
  if (test_sqr(1.123456789e25, 1.2621552e+50)) passed++;
  if (test_sqr(1.123456789e-5, 1.2621552e-10)) passed++;
  if (test_sqr(3.0, 9)) passed++;
  if (test_sqr(7.678, 58.951684)) passed++;
  std::cout << "\nsqr() passed " << passed << " tests.\n";
  return passed;
}
// function to run the tests
int run_sum_tests() {
  std::cout << "\nTesting sum()...\n" << std::endl;
  // initialise counter for number of tests passed
  int passed = 0;
  // do various tests
  if (test_sum(0, 0, 0)) passed++;
  if (test_sum(-1, 1, 0)) passed++;
  if (test_sum(2, 3, 5)) passed++;
  if (test_sum(826109, 78657567, 79483676)) passed++;
  if (test_sum(-99, -1, -100)) passed++;
  std::cout << "\nsum() passed " << passed << " tests.\n";
  return passed;
}
// function to run the tests

int run_min_array_value_tests() {
  std::cout << "\nTesting min_array_value()...\n" << std::endl;
  // initialise counter for number of tests passed
  int passed = 0;
  int array[] = {-4, 5, 6, 2, 65, 23, 6, 45, 87, -23};
  if (test_min_array_value(array, 10, -23)) passed++;
  array[3] = -67;
  if (test_min_array_value(array, 10, -67)) passed++;
  array[0] = -1545344;
  if (test_min_array_value(array, 10, -1545344)) passed++;
  array[4] = -10545344;
  if (test_min_array_value(array, 10, -10545344)) passed++;
  array[9] = -110545344;
  if (test_min_array_value(array, 10, -110545344)) passed++;
  std::cout << "\nmin_array_value() passed " << passed << " tests.\n";
  return passed;
}
  