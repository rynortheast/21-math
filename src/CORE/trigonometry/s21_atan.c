#include "../../s21_math.h"

long double s21_atan(double num) {
  long double result = 0;
  int status = 1, sign = 1, aux = 0;
  if (s21_isnan(num)) {
    status = 0;
  } else if (s21_isinf(num)) {
    sign = num < 0 ? (-1) : (1);
    result = s21_PI / 2;
  } else {
    long double valueTailor = (long double)num;

    if (valueTailor < 0.0) valueTailor *= (sign = (-1));

    if (s21_fabs(valueTailor) > 1.0) valueTailor = (aux = 1) / valueTailor;

    if (valueTailor == 1.0) {
      result = s21_PI / 4;
    } else if (valueTailor == (-1.0)) {
      result = -s21_PI / 4;
    } else {
      for (int x = 0; x < 10000; x += 1)
        result += (s21_pow(-1, x) * s21_pow(valueTailor, (1 + (2 * x)))) /
                  (1 + (2 * x));
    }
  }
  return status ? (aux ? (sign * (s21_PI / 2 - result)) : (sign * result))
                : S21_NAN;
}
