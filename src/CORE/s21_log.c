#include "../s21_math.h"

long double s21_log(double x) {
  long double res = 0.0;
  return (check_log(x, &res)) ? process_log(x) : res;
}

long double process_log(double x) {
  long double res = 0.0;
  int odd_sign = 1;
  long double buf = 1.0, l_series = 0.0;
  int sc = 0;

  if (x > 2) {
    while (x > 1) {
      x /= 10;
      sc++;
    }
  } else if (x < 1) {
    while (x < 1) {
      x *= 10;
      sc--;
    }
  }
  int dv = 0;
  while (x >= 2) {
    x /= 2;
    dv++;
  }
  res = sc * s21_LOG_10 + dv * s21_LOG_2;

  for (int i = 1; s21_fabs(buf) > 1e-6; i++, odd_sign *= -1) {
    buf *= x - 1;
    l_series += odd_sign * buf / i;
  }
  return res + l_series;
}

int check_log(double x, long double *res) {
  int ok = 1;
  if (s21_isnan(x) || x < 0) {
    *res = S21_NAN;
    ok = 0;
  } else if (x == S21_INF || x == S21_NINF) {
    *res = x;
    ok = 0;
  } else if (x == 0.0) {
    *res = S21_NINF;
    ok = 0;
  } else if (x == 1.0) {
    *res = 0.0;
    ok = 0;
  }
  return ok;
}
