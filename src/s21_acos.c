#include "s21_math.h"

long double s21_acos(double num) {
    int status = 1;
    long double result = s21_PI / 2;
    if (s21_isNAN(num) || s21_isINF(num)) {
        status = 0;
    } else {
        if (num == 1.0)
            result = 0;
        else if (num == (-1.0))
            result = s21_PI;
        else if (num > 0)
            result = s21_atan(sqrt(1 - pow(num, 2)) / (num));
        else if (num < 0)
            result = s21_PI + s21_atan(sqrt(1 - pow(num, 2)) / (num));
    }
    return status ? result : s21_NAN;
}
