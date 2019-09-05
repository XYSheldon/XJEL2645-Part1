#ifndef SPHERE_H
#define SPHERE_H

#define PI 3.14159265

class Sphere {
 public:
  // only accessors and mutators are public in this example
  void set_radius(float radius);
  float get_surfacearea();
  float get_radius();
  float get_volume();
 private:
  // member variables are private and set/get via accessor/mutator
  float _radius;
};

#endif