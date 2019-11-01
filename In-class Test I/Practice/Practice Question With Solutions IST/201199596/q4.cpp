#include "q4.h"
#include <limits>
// Add any required libraries above

// API: returns the mean value in an array
double mean_array_value(int array[], int n) {
  double sum=0;
  for (int i=0;i<n;i++)
  {
    sum+=array[i];
  }
  sum/=n;
  return sum;
}