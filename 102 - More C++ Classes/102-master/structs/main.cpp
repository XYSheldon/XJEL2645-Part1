#include <iostream>

struct Point2D {
  int x;
  int y;
};

int main() {
  // create a 2D point struct and initialise using an initialiser list
  Point2D origin = {0, 0};
  // in C++11, we can also initialise using uniform initialisation
  Point2D destination{45, 76};
  // we can also create an 'empty' struct
  Point2D corner;
  // prior to C++11, we would have to assign values to variables individually
  corner.x = 10;
  corner.y = 5;
  // since C++11, we can assign values using a list
  corner = {12, 15};
  return 0;
}