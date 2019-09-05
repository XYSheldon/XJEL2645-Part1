#include "Circle.h"

// class constructor definition
Circle::Circle() {
  _radius = 1.0;
}
// mutator method to set radius
void Circle::set_radius(float radius) { _radius = radius; }
// accessor method to get area
float Circle::get_area() {
  _area = PI * _radius * _radius;
  return _area;
}