#include "Sphere.h"

void Sphere::set_radius(float radius) { _radius = radius; }

float Sphere::get_surfacearea() { return 4 * PI * _radius * _radius; }

float Sphere::get_volume() { return 4 * PI * _radius * _radius * _radius / 3; }

float Sphere::get_radius() { return _radius; }