#ifndef TESTS_H
#define TESTS_H

#include "funcs.h"

// tests whether two double are almost equal
bool almost_equal(double a, double b);

bool test_sum(int a, int b, int expected);
bool test_sqr(double a, double expected);
bool test_min_array_value(int array[], int n, int expected);
bool test_biggest(int a, int b, int expected);
bool test_hypotenuse(double a, double b, double expected);
bool test_bmi(double height, double weight, double expected);
bool test_array_average(int array[], int n, int expected);

int run_sqr_tests();
int run_sum_tests();
int run_min_array_value_tests();
int run_biggest_tests();
int run_hypotenuse_tests();
int run_bmi_tests();
int run_array_average_tests();
#endif