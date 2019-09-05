#ifndef TESTS_H
#define TESTS_H

#include "funcs.h"

// tests whether two double are almost equal
bool almost_equal(double a, double b);

bool test_sum(int a, int b, int expected);
bool test_sqr(double a, double expected);
bool test_min_array_value(int array[], int n, int expected);

int run_sqr_tests();
int run_sum_tests();
int run_min_array_value_tests();

#endif