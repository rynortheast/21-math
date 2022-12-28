#include "../../s21_math.h"

long double s21_asin(double num) {
  int status = 1;
  long double result = 0;
  if (s21_isnan(num) || s21_isinf(num)) {
    status = 0;
  } else {
    if (num == 1.0)
      result = s21_PI / 2;
    else if (num == (-1.0))
      result = -s21_PI / 2;
    else
      result = s21_atan((num) / s21_sqrt(1 - s21_pow(num, 2)));
  }
  return status ? result : S21_NAN;
}
