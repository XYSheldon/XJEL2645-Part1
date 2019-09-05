#include <cmath>
#include <iostream>

const double PI = 3.14159265359;

void circular(double radius, double &area, double &volume);

int main() {
  double area, volume;
  circular(1.0, area, volume);
  std::cout << "Area = " << area << ", Volume = " << volume << std::endl;
}

void circular(double radius, double &area, double &volume) {
  area = PI * pow(radius, 2.0);
  volume = (4.0 / 3.0) * PI * pow(radius, 3.0);
}