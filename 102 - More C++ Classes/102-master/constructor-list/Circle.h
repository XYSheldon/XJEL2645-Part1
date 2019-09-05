#ifndef CIRCLE_H
#define CIRCLE_H

#define PI 3.14159265

class Circle {
 public:
  Circle();                       // constructor
  void set_radius(float radius);  // mutator
  float get_area();               // accessor
 private:
  // member variables are private and set/get via accessor/mutator
  float _radius;
  float _area;
};

#endif