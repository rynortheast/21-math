#include "../s21_math.h"

long double s21_exp(double x) {
  long double res = 1.;

  // if (s21_isnan(x) || s21_isinf(x)) {
  //     res = x;
  // } else {
  //     int sign = 0;
  //     if (x < 0) {
  //         sign = 1;
  //         x *= -1;
  //     }

  //     long double arg = (long double) x;
  //     double next = 1.;

  //     for (int i = 1; s21_fabs(next / res) > 1e-100; i++) {
  //         next = next * arg / i;
  //         res += next;

  //         if (res > S21_DBL_MAX) {
  //             res = S21_INF;
  //             break;
  //         }
  //     }

  //     if (sign) {
  //         res = 1. / res;
  //     }
  // }
  return (check_exp(x, &res)) ? process_exp(x) : res;
}

long double process_exp(double x) {
  long double res = 1.0;
  int sign = (x < 0) ? -1 : 1;
  x = s21_fabs(x);
  long double tmp_x = (long double)x;
  double add = 1.;

  for (int i = 1; s21_fabs(add / res) > 1e-100; i++) {
    add = add * tmp_x / i;
    res += add;

    if (res > S21_DBL_MAX) {
      res = S21_INF;
      break;
    }
  }

  if (sign == -1) {
    res = 1.0 / res;
  }

  return res;
}

int check_exp(double x, long double *res) {
  int ok = 1;
  if (s21_isnan(x) || x == S21_INF) {
    *res = x;
    ok = 0;
  } else if (x == S21_NINF) {
    *res = 0.0;
    ok = 0;
  }
  return ok;
}
