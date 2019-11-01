#include "q2.h"
// Add any required libraries above

// API: the function should return true if the number is a multiple
// of 3 and 5. The function should only return values for numbers > 0.
// if the number is less than or equal to 0, the function should return false
bool multiple(int a) {
  if (a<=0) return 0;
  if ((a%3==0)&&(a%5==0)) return 1; 
  return false;
}
