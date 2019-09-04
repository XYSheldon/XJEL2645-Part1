#include "Circle.h"

void Circle::set_radius(float radius) { _radius = radius; }

float Circle::get_area() { return PI * _radius * _radius; }