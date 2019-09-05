#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
public:
    // only accessors and mutators are public in this example
    void set_width(float width);
    void set_height(float height);
    void set_height_and_width(float height, float width);
    float get_area();
    float get_height_and_width();
    float get_perimeter();

private:
    // member variables are private and set/get via accessor/mutator
    float _width,_height;
};

#endif