#include "s21_math.h"

long double s21_tan(double num) {
    int status = 1;
    if (s21_isNAN(num) || s21_isINF(num))
        status = 0;
    return status ? (s21_sin(num) / s21_cos(num)) : s21_NAN;
}
