#include "s21_math.h"

long double s21_cos(double num) {
    long double result = 1.0;
    int status = 1, sign = (-1);
    if (s21_isNAN(num) || s21_isINF(num)) {
        status = 0;
    } else {
        num = fmod(num, s21_PI * 2);

        if (num > (s21_PI / 2.0) && num <= s21_PI)
            num = (s21_PI - num);
        else if (num > s21_PI && num <= ((s21_PI * 3.0) / 2.0))
            num -= s21_PI;
        else if (num > ((s21_PI * 3.0) / 2.0) && num <= (s21_PI * 2.0))
            num = ((2 * s21_PI) - num) * (sign = 1);
        else sign = 1;

        result = (long double) 1.0;
        long double valueTailor = 1.0;
        for (int i = 1; fabsl(valueTailor / num) > 1e-100; i += 1)
            result += (valueTailor = ((-valueTailor) * pow(num, 2)) / ((2.0 * i - 1) * (2.0 * i)));
    }
    return status ? (result * sign) : s21_NAN;
}
