#include "../../s21_math.h"

long double s21_floor(double x) {
  return (check_floor(x)) ? (long double)x : process_floor(x);
}

int check_floor(double x) {
  return s21_isinf(x) || is_neg_inf(x) || s21_isnan(x);
}

long double process_floor(double x) {
  long double res = (int)(x);
  if (x < 0 && res != x) {
    res -= 1;
  }
  return res;
}
