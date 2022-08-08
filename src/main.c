#include "s21_math.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void) {
    
	printf("TEST_1 - %Lf\n", tanl(0));
	printf("TEST_2 - %Lf\n\n", s21_tan(0));
	printf("TEST_3 - %Lf\n", tanl(1.999));
	printf("TEST_4 - %Lf\n\n", s21_tan(1.999));
	printf("TEST_5 - %Lf\n", tanl(-1.676));
	printf("TEST_6 - %Lf\n\n", s21_tan(-1.676));
	printf("TEST_7 - %Lf\n", tanl(5.123));
	printf("TEST_8 - %Lf\n\n", s21_tan(5.123));
	printf("TEST_9 - %Lf\n", tanl(-5.3123));
	printf("TEST_0 - %Lf", s21_tan(-5.3123));
	
    return 0;
}
