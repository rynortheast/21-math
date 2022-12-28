#include "../../s21_math.h"

long double s21_cos(double num) {
  long double result = 1.0;
  int status = 1, sign = (-1);
  if (s21_isnan(num) || s21_isinf(num)) {
    status = 0;
  } else {
    num = s21_fmod(num, s21_PI * 2.0);

    if (num > (s21_PI / 2.0) && num <= s21_PI)
      num = (s21_PI - num);
    else if (num > s21_PI && num <= ((s21_PI * 3.0) / 2.0))
      num -= s21_PI;
    else if (num > ((s21_PI * 3.0) / 2.0) && num <= (s21_PI * 2.0))
      num = ((2.0 * s21_PI) - num) * (sign = 1);
    else
      sign = 1;

    long double valueTailor = 1.0;
    for (int i = 1; s21_fabs(valueTailor / result) > 1e-100; i += 1)
      result += (valueTailor = ((-valueTailor) * num * num) /
                               ((2.0 * i - 1) * (2.0 * i)));
  }
  return status ? (result * sign) : S21_NAN;
}
