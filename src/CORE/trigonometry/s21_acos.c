#include "../../s21_math.h"

long double s21_acos(double num) {
  int status = 1;
  long double result = s21_PI / 2;
  if (s21_isnan(num) || s21_isinf(num)) {
    status = 0;
  } else {
    if (s21_fabs(num) > 1.0) errno = EDOM;

    if (num == 1.0)
      result = 0;
    else if (num == (-1.0))
      result = s21_PI;
    else if (num > 0)
      result = s21_atan(s21_sqrt(1 - s21_pow(num, 2)) / (num));
    else if (num < 0)
      result = s21_PI + s21_atan(s21_sqrt(1 - s21_pow(num, 2)) / (num));
  }
  return status ? result : S21_NAN;
}
