#ifndef CIRCLE_H
#define CIRCLE_H

#define PI 3.14159265

/** Circle class

@brief Class for calculating the area of a circle

@version 1.0

@author Dr Craig A. Evans

@date November 2018

@code

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

@endcode
*/
class Circle {
 public:
  /**
   * @brief Sets the radius
   * @param radius @details Radius of the circle in metres
   */
  void set_radius(float radius);
  /**
   * @brief Gets the circle area
   * @returns the area of the circle in metres squared
   */
  float get_area();

 private:
  float _radius;
  float _area;
};

#endif 