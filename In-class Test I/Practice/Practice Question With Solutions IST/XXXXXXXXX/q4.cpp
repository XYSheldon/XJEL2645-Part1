#include "q4.h"
#include <limits>
// Add any required libraries above

// API: returns the mean value in an array
double mean_array_value(int array[], int n) {
  // need a variable to store the sum
  int sum = 0;
  // loop through array
  for (int i = 0; i < n; i++) {
    sum += array[i];
  }
  // need to type-cast the ints to a double
  double mean = double(sum) / double(n);
  return mean;
}