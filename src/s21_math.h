#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#include <stdio.h>
#include <math.h>

#define S21_INF (__builtin_inff())
#define S21_NAN (__builtin_nanf(""))
#define is_nan(x) __builtin_isnan(x)
#define is_inf(x) __builtin_isinf(x)

#define S21_PI 3.1415926535897932384
#define S21_RAD 57.29577951308
#define S21_AUX 0.01745240644

long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_cos(double x);
long double s21_sin(double x);
long double s21_tan(double x);

#endif  // SRC_S21_MATH_H
