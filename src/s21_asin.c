#include "s21_math.h"

long double s21_asin(double num) {
    int status = 1;
    long double result = 0;
    if (s21_isNAN(num) || s21_isINF(num)) {
        status = 0;
    } else {
        if (num == 1.0)
            result = s21_PI / 2;
        else if (num == (-1.0))
            result = -s21_PI / 2;
        else
            result = s21_atan((num) / sqrt(1 - pow(num, 2)));
    }
    return status ? result : s21_NAN;
}
