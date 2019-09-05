#include <iostream>

void increment(int variable);

int main() {
  int variable = 99;
  std::cout << "Variable has a value of: " << variable << std::endl;
  increment(variable);
  std::cout << "Variable now has a value of: " << variable << std::endl;
}

void increment(int variable) {
  variable++;
  std::cout << "This variable has a value of: " << variable << std::endl;
}