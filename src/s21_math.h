#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#include <stdio.h>
#include <math.h>

#define s21_INF (__builtin_inff())
#define s21_NAN (__builtin_nanf(""))
#define s21_isNAN(x) __builtin_isnan(x)
#define s21_isINF(x) __builtin_isinf(x)

#define s21_PI 3.1415926535897932384

long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_cos(double x);
long double s21_sin(double x);
long double s21_tan(double x);

#endif  // SRC_S21_MATH_H
