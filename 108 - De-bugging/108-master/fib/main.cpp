#include <iostream>

int main() {
  int n = 0;
  std::cout << "Enter the number of terms in the Fibonacci sequence to print: ";
  std::cin >> n;

  // seed values
  int fn_minus1 = 0;
  int fn_minus2 = 1;
  int fn = 1;
  std::cout << fn_minus1 << "\n" << fn_minus2 << std::endl;

  // loop through the number of terms
  for (int i = 2; i < n; i++) {
    // shift the values in the sequence
    fn_minus2 = fn_minus1;
    fn_minus1 = fn;

    // work out the next term in the sequence
    fn = fn_minus1 + fn_minus2;
    // print to the terminal
    std::cout << fn << std::endl;

#ifdef DEBUG
    std::cout << "fn = " << fn << " fn-1 = " << fn_minus1
              << " fn-2 = " << fn_minus2 << std::endl;
#endif
  }
}