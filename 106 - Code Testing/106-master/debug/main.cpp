#include <iostream>

// function we have written
int sum(int a, int b);
// function to test function
bool test_sum(int a, int b, int expected);
// function to run the tests
int run_sum_tests();

int main() {
// test the function
#ifdef DEBUG
  run_sum_tests();
#endif
}

// function we have implemented
int sum(int a, int b) { return a - b; }

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