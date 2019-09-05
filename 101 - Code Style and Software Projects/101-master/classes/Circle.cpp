#include "Circle.h"

void Circle::set_radius(float radius) { _radius = radius; }

float Circle::get_area() { return PI * _radius * _radius; }

float Circle::get_circumference() { return 2 * PI * _radius; }

float Circle::get_radius() { return _radius; }

float Circle::get_diameter() { return _radius * 2; }