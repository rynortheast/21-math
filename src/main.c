#include "s21_math.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void) {
    
	// printf("TEST_1 - %Lf\n", tanl(0));
	// printf("TEST_1 - %Lf\n\n", s21_tan(0));
	// printf("TEST_2 - %Lf\n", tanl(1.999));
	// printf("TEST_2 - %Lf\n\n", s21_tan(1.999));
	// printf("TEST_3 - %Lf\n", tanl(-1.676));
	// printf("TEST_3 - %Lf\n\n", s21_tan(-1.676));
	// printf("TEST_4 - %Lf\n", tanl(5.123));
	// printf("TEST_4 - %Lf\n\n", s21_tan(5.123));
	// printf("TEST_5 - %Lf\n", tanl(-5.3123));
	// printf("TEST_5 - %Lf", s21_tan(-5.3123));
	
	printf("\n\nNEW_TEST - [%Lf] [%Lf]\n\n", acosl(0.9), atanl(sqrt(1 - pow(0.9, 2)) / (0.9)));

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

    return 0;
}
