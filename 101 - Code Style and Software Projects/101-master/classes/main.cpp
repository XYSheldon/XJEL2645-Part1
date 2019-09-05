#include <iostream>
// include the class header file in main
#include "Circle.h"
#include "Sphere.h"
#include "Rectangle.h"

int main()
{
  std::cout << "Enter circle radius (in metres): ";
  float radius;
  std::cin >> radius;
  // create a circle object and use the public methods
  Circle circle;
  circle.set_radius(radius);
  float area = circle.get_area();
  std::cout << "The circle has an area of " << area << " m^2.\n";

  float circumference = circle.get_circumference();
  std::cout << "The circle has a circumference of " << circumference << " m.\n";

  float diameter = circle.get_diameter();
  std::cout << "The circle has a diameter of " << diameter << " m.\n";

  //Sphere Now

  std::cout << "Enter sphere radius (in metres): ";
  std::cin >> radius;

  Sphere sphere;
  sphere.set_radius(radius);
  float surfacearea = sphere.get_surfacearea();
  std::cout << "The sphere has a surface area of " << surfacearea << " m^2.\n";

  float volume = sphere.get_volume();
  std::cout << "The sphere has a volume of " << volume << " m^3.\n";

  //Rectangle now

  float width, height;
  std::cout << "Enter rectangle width (in metres): ";
  std::cin >> width;
  std::cout << "Enter rectangle height (in metres): ";
  std::cin >> height;

  Rectangle rectangle;
  rectangle.set_height_and_width(height, width);

  area = rectangle.get_area();
  std::cout << "The rectangle has an area of " << area << " m^2.\n";
  float perimeter = rectangle.get_perimeter();
  std::cout << "The rectangle has a perimeter of " << perimeter << " m^2.\n";
  return 0;
}