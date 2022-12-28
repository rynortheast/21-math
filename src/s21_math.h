#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#include <errno.h>
#include <stdio.h>

#define s21_PI 3.1415926535897932384626433832795
#define S21_INF 1.0 / 0.0
#define S21_NINF -S21_INF
#define S21_NAN __builtin_nanf("0x7fc00000")
#define S21_DBL_MAX 1.7976931348623158e+308
#define s21_LOG_10 2.30258509299
#define s21_LOG_2 0.69314718056
#define is_fin(x) __builtin_isfinite(x)
#define s21_isnan(x) __builtin_isnan(x)
#define s21_isinf(x) __builtin_isinf(x)

int is_neg_inf(double x);

int s21_abs(int x);
long double s21_fabs(double x);

long double s21_ceil(double x);
long double process_ceil(double x, long double tmp);
int check_ceil(long double x);

long double s21_fmod(double x, double y);
long double process_fmod(double x, double y);
int check_fmod(double x, double y);

long double s21_floor(double x);
long double process_floor(double x);
int check_floor(double x);

long double s21_sqrt(double x);
long double check_sqrt(double x);

long double s21_exp(double x);
long double process_exp(double x);
int check_exp(double x, long double *res);

long double s21_log(double x);
long double process_log(double x);
int check_log(double x, long double *res);

long double s21_pow(double base, double exp);
long double process_pow(double base, double exp);
long double s21_powi(double base, double exp);
long double s21_powf(double base, double exp);
int pow_check(double base, double exp, long double *result);

long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_cos(double x);
long double s21_sin(double x);
long double s21_tan(double x);

#endif  // SRC_S21_MATH_H_
