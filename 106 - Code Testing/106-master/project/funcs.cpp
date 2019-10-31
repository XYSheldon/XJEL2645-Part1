#include "funcs.h"
#include <iostream>
#include <limits>
#include <cmath>

int sum(int a, int b) { return a + b; }

// returns the square of a number
double sqr(double a) { return a * a; }

// returns the lowest value in an array
int min_array_value(int array[], int n)
{
  // initialise comparison value to largest possible int
  // this ensures that we will find a smaller value in the array
  int min = std::numeric_limits<int>::max();
  // loop through array
  for (int i = 0; i < n; i++)
  {
    // if find a value smaller than current smallest value,
    // update the minimum value
    if (array[i] < min)
    {
      min = array[i];
    }
  }
  return min;
}
int biggest(int a, int b)
{
  return (a > b) ? a : b;
}

double hypotenuse(double a, double b)
{
  return sqrt((a * a) + (b * b));
}

double bmi(double height, double weight)
{
  if (height<0||weight<0) return -1.0;
  return (weight / height / height);
}

double array_average(int array[], int n)
{
  double sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += array[i];
  }
  return (sum / n);
}
