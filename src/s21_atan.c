#include "s21_math.h"
#include <math.h>

long double s21_atan(double num) {
    long double result = 0;
    int status = 1, sign = 1, aux = 0;
    if (s21_isNAN(num) || s21_isINF(num)) {
        status = 0;
    } else {
        long double valueTailor = (long double) num;

        if (valueTailor < 0.0)
            valueTailor *= (sign = (-1));

        if (fabsl(valueTailor) > 1.0)
            valueTailor = (aux = 1) / valueTailor;

        if (valueTailor == 1.0) {
            result = s21_PI / 4;
        } else if (valueTailor == (-1.0)) {
            result = -s21_PI / 4;
        } else {
            for (int x = 0; x < 1000; x += 1)
                result += (pow(-1, x) * powl(valueTailor, (1 + (2 * x)))) / (1 + (2 * x));
        }
    }
    return status ? (aux ? (sign * (s21_PI / 2 - result)) : (sign * result)) : s21_NAN;
}
