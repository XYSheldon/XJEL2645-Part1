#include <iostream>
#include "Circle.h"

int main() {
  Circle circle(2.0);
  float area = circle.get_area();
  std::cout << "The circle has an area of " << area << " m^2.\n";
  return 0;
}