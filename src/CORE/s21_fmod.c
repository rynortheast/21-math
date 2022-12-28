#include "../s21_math.h"

long double s21_fmod(double x, double y) {
  return check_fmod(x, y) ? process_fmod(x, y) : S21_NAN;
}

long double process_fmod(double x, double y) {
  long double res = 0.0;
  int sign = 1;
  if (x < 0) {
    sign = -1;
    x = s21_fabs(x);
  }

  if (y < 0) {
    y = s21_fabs(y);
  }
  if (y == 0) {
    res = S21_NAN;
  } else if (x == y) {
    res = 0;
  } else if (x < y) {
    res = x;
  } else {
    long long int mod = x / y;
    res = (long double)x - mod * (long double)y;
  }
  return res * sign;
}

int check_fmod(double x, double y) {
  return (s21_isinf(x) || is_neg_inf(x) || s21_isnan(x) || s21_isnan(y)) ? 0
                                                                         : 1;
}

int is_neg_inf(double x) { return x == S21_NINF; }
