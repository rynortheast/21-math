#include "s21_math.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void) {
    
	printf("TEST_1 - %Lf\n", sinl(0));
	printf("TEST_1 - %Lf\n\n", s21_sin(0));
	printf("TEST_2 - %Lf\n", sinl(1.999));
	printf("TEST_2 - %Lf\n\n", s21_sin(1.999));
	printf("TEST_3 - %Lf\n", sinl(-1.676));
	printf("TEST_3 - %Lf\n\n", s21_sin(-1.676));
	printf("TEST_4 - %Lf\n", sinl(5.123));
	printf("TEST_4 - %Lf\n\n", s21_sin(5.123));
	printf("TEST_5 - %Lf\n", sinl(-5.3123));
	printf("TEST_5 - %Lf\n\n", s21_sin(-5.3123));

	printf("TEST_1 - %Lf\n", cosl(0));
	printf("TEST_1 - %Lf\n\n", s21_cos(0));
	printf("TEST_2 - %Lf\n", cosl(1.999));
	printf("TEST_2 - %Lf\n\n", s21_cos(1.999));
	printf("TEST_3 - %Lf\n", cosl(-1.676));
	printf("TEST_3 - %Lf\n\n", s21_cos(-1.676));
	printf("TEST_4 - %Lf\n", cosl(5.123));
	printf("TEST_4 - %Lf\n\n", s21_cos(5.123));
	printf("TEST_5 - %Lf\n", cosl(-5.3123));
	printf("TEST_5 - %Lf\n\n", s21_cos(-5.3123));

	printf("TEST_1 - %Lf\n", tanl(0));
	printf("TEST_1 - %Lf\n\n", s21_tan(0));
	printf("TEST_2 - %Lf\n", tanl(1.999));
	printf("TEST_2 - %Lf\n\n", s21_tan(1.999));
	printf("TEST_3 - %Lf\n", tanl(-1.676));
	printf("TEST_3 - %Lf\n\n", s21_tan(-1.676));
	printf("TEST_4 - %Lf\n", tanl(5.123));
	printf("TEST_4 - %Lf\n\n", s21_tan(5.123));
	printf("TEST_5 - %Lf\n", tanl(-5.3123));
	printf("TEST_5 - %Lf\n\n", s21_tan(-5.3123));

	printf("TEST_6 - %Lf\n", acosl(-5));
	printf("TEST_6 - %Lf\n\n", s21_acos(-5));
	printf("TEST_7 - %Lf\n", acosl(5));
	printf("TEST_7 - %Lf\n\n", s21_acos(5));
	printf("TEST_8 - %Lf\n", acosl(-1));
	printf("TEST_8 - %Lf\n\n", s21_acos(-1));
	printf("TEST_9 - %Lf\n", acosl(1));
	printf("TEST_9 - %Lf\n\n", s21_acos(1));
	printf("TEST_10 - %Lf\n", acosl(-0.99));
	printf("TEST_10 - %Lf\n\n", s21_acos(-0.99));
	printf("TEST_11 - %Lf\n", acosl(0.99));
	printf("TEST_11 - %Lf\n\n", s21_acos(0.99));
	printf("TEST_12 - %Lf\n", acosl(0));
	printf("TEST_12 - %Lf\n\n", s21_acos(0));

	printf("TEST_6 - %Lf\n", asinl(-5));
	printf("TEST_6 - %Lf\n\n", s21_asin(-5));
	printf("TEST_7 - %Lf\n", asinl(5));
	printf("TEST_7 - %Lf\n\n", s21_asin(5));
	printf("TEST_8 - %Lf\n", asinl(-1));
	printf("TEST_8 - %Lf\n\n", s21_asin(-1));
	printf("TEST_9 - %Lf\n", asinl(1));
	printf("TEST_9 - %Lf\n\n", s21_asin(1));
	printf("TEST_10 - %Lf\n", asinl(-0.99));
	printf("TEST_10 - %Lf\n\n", s21_asin(-0.99));
	printf("TEST_11 - %Lf\n", asinl(0.99));
	printf("TEST_11 - %Lf\n\n", s21_asin(0.99));
	printf("TEST_12 - %Lf\n", asinl(0));
	printf("TEST_12 - %Lf\n\n", s21_asin(0));

	printf("TEST_6 - %Lf\n", atanl(-5));
	printf("TEST_6 - %Lf\n\n", s21_atan(-5));
	printf("TEST_7 - %Lf\n", atanl(5));
	printf("TEST_7 - %Lf\n\n", s21_atan(5));
	printf("TEST_8 - %Lf\n", atanl(-1));
	printf("TEST_8 - %Lf\n\n", s21_atan(-1));
	printf("TEST_9 - %Lf\n", atanl(1));
	printf("TEST_9 - %Lf\n\n", s21_atan(1));
	printf("TEST_10 - %Lf\n", atanl(-0.99));
	printf("TEST_10 - %Lf\n\n", s21_atan(-0.99));
	printf("TEST_11 - %Lf\n", atanl(0.99));
	printf("TEST_11 - %Lf\n\n", s21_atan(0.99));
	printf("TEST_12 - %Lf\n", atanl(0));
	printf("TEST_12 - %Lf\n\n", s21_atan(0));

    return 0;
}
