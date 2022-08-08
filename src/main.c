#include "s21_math.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void) {
    
	printf("TEST_1 - %Lf\n", sinl(0));
	printf("TEST_2 - %Lf\n\n", s21_sin(0));
	printf("TEST_3 - %Lf\n", sinl(1.999));
	printf("TEST_4 - %Lf\n\n", s21_sin(1.999));
	printf("TEST_5 - %Lf\n", sinl(-1.676));
	printf("TEST_6 - %Lf\n\n", s21_sin(-1.676));
	printf("TEST_7 - %Lf\n", sinl(5.123));
	printf("TEST_8 - %Lf\n\n", s21_sin(5.123));
	printf("TEST_9 - %Lf\n", sinl(-5.3123));
	printf("TEST_0 - %Lf", s21_sin(-5.3123));
	
    return 0;
}
