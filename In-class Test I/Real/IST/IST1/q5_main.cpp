// DO NOT MODIFY THIS FILE!!!!!!
#include <iostream>
#include "q5.h"


int main() {
  std::cout << "Question 5\n";

  int n = 5;
  float T = 2.0;
  float *values = func(n, T);

  for (int i = 0 ; i < n; i++) {
    std::cout << i << " " << values[i] << std::endl;
  }

}