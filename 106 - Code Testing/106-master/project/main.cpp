#include "main.h"
#include <iostream>
#include "funcs.h"
#include "tests.h"

int main()
{
// test the function if DEBUG defined
#ifdef DEBUG
  run_sqr_tests();
  run_sum_tests();
  run_min_array_value_tests();
  run_biggest_tests();
  run_hypotenuse_tests();
  run_bmi_tests();
  run_array_average_tests();
#endif
}