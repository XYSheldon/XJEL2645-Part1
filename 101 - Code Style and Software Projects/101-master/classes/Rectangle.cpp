#include "Rectangle.h"

void Rectangle::set_width(float width) { _width = width; }
void Rectangle::set_height(float height) { _height = height; }
void Rectangle::set_height_and_width(float height, float width)
{
    _width = width;
    _height = height;
}

float Rectangle::get_area() { return _height * _width; }
float Rectangle::get_perimeter() { return 2 * (_height + _width); }