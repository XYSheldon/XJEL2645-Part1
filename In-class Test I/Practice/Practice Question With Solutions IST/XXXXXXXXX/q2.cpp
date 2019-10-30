#include "q2.h"
// Add any required libraries above

// API: the function should return true if the number is a multiple
// of 3 and 5. The function should only return values for numbers > 0.
// if the number is less than or equal to 0, the function should return false
bool multiple(int a) {
  if (a <= 0) {
    return false;
  }

  bool multiple_of_3 = false;
  if (a % 3 == 0) {
    multiple_of_3 = true;
  }
  bool multiple_of_5 = false;
  if (a % 5 == 0) {
    multiple_of_5 = true;
  }

  if (multiple_of_3 == true && multiple_of_5 == true) {
    return true;
  } else {
    return false;
  }
}
