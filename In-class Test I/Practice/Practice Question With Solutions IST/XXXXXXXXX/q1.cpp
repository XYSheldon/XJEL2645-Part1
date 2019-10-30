#include "q1.h"
// Add any required libraries above

// API: the function should return 'true' if the number is even and 'false'
// if the number is odd
bool is_even(int a) {
  // get the remainder after dividing by 2
  if (a % 2 == 0) {
    // if no remainder, must be even
    return true;
  } else {
    // if there is a remainder, must be false
    return false;
  }
}
