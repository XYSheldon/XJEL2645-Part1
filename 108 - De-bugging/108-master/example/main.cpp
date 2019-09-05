#include <iostream>

int main() {
  int n = 10;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += i;
    std::cout << "sum = " << sum << std::endl;
  }
}