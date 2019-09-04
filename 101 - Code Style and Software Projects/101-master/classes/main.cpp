#include <iostream>
// include the class header file in main
#include "Circle.h"

int main() {
  std::cout << "Enter circle radius (in metres): ";
  float radius;
  std::cin >> radius;
  // create a circle object and use the public methods
  Circle circle;
  circle.set_radius(radius);
  float area = circle.get_area();
  std::cout << "The circle has an area of " << area << " m^2.\n";
  return 0;
}