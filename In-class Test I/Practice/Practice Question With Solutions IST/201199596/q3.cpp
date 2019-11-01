#include "q3.h"
#include <limits>
// Add any required libraries above

// API: returns the lowest value in an array
int min_array_value(int array[], int n) {
  int min=0xffff;
  for (int i=0;i<n;i++)
  {
    if (array[i]<min) min=array[i];
  }
  return min;
}