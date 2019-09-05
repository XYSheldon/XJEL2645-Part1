#include <cmath>
#include <iostream>

// in a struct, the members are public by default
struct Vector {
  int x;
  int y;
  // magnitude of the vector
  int mag() { return sqrt(x * x + y * y); }
};
// in a class, the members are private by default
class VectorClass {
 public:
  int x;
  int y;
  // magnitude of the vector
  int mag() { return sqrt(x * x + y * y); }
};

int main() {
  // Example using a struct
  Vector vec = {3, 4};
  int mag = vec.mag();
  std::cout << "Magnitude of {" << vec.x << ", " << vec.y << "} = " << mag
            << std::endl;
  // Example using a class
  VectorClass vec_class = {3, 4};
  int mag_class = vec.mag();
  std::cout << "Magnitude of {" << vec_class.x << ", " << vec_class.y
            << "} = " << mag_class << std::endl;
  return 0;
}