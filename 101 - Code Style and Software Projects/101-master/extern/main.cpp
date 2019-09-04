#include <iostream>
#include "main.h"
#include "extern.h"

int global_variable = 99;

int main() {
  change_global_variable();
  std::cout << "Global variable = " << global_variable << std::endl;
  return 0;
}