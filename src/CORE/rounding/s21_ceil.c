#include "../../s21_math.h"

long double s21_ceil(double x) {
  return (check_ceil(s21_fabs(x))) ? process_ceil(x, s21_fabs(x))
                                   : (long double)x;
}

int check_ceil(long double x) {
  return (x == S21_INF || x == 0 || x == S21_DBL_MAX) ? 0 : 1;
}

long double process_ceil(double x, long double tmp) {
  if (tmp > 0) {
    tmp = s21_abs((long long)x);
    if (tmp != s21_fabs(x)) {
      if (x > 0) {
        tmp++;
      } else {
        tmp = -tmp;
      }
    } else {
      tmp = x;
    }
  } else {
    tmp = S21_NAN;
  }
  return tmp;
}
