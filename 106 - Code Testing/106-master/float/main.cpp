#include <cmath>  // for std::abs
#include <iostream>
#include <limits>

// function we have written
double sqr(double a);
// function to test function
bool test_sqr(double a, double expected);
// function to run the tests
int run_sqr_tests();
// tests whether two double are almost equal
bool almost_equal(double a, double b);

int main() {
// test the function
#ifdef DEBUG
  run_sqr_tests();
#endif
}

// function we have implemented
double sqr(double a) { return a * a; }

// function to test sqr
bool test_sqr(double a, double expected) {
  std::cout.precision(std::numeric_limits<double>::max_digits10);
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
// checks whether 2 double's are almost equal
bool almost_equal(double a, double b) {
  // == may return true, but also check whether the relative difference
  // between the numbers is less than a small threshold
  return a == b || (std::abs(a - b) / std::max(a, b) <= 1e-9);
}
