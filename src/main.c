#include "s21_math.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void viewGreeting();

int main(void) {
    
	viewGreeting();

	printf("\n  FUNCTION: s21_sin\n");
	printf("|---------------------------------------------------------------------|\n\n");
	printf("  sin  |  %Lf  |", sinl(0));
	printf("  %Lf  |", sinl(1.999));
	printf("  %Lf  |", sinl(-1.676));
	printf("  %Lf  |", sinl(5.123));
	printf("  %Lf\n", sinl(-5.3123));
	printf("  s21  |  %Lf  |", s21_sin(0));
	printf("  %Lf  |", s21_sin(1.999));
	printf("  %Lf  |", s21_sin(-1.676));
	printf("  %Lf  |", s21_sin(5.123));
	printf("  %Lf\n\n", s21_sin(-5.3123));
	printf("|---------------------------------------------------------------------|\n\n");

	printf("\n  FUNCTION: s21_cos\n");
	printf("|---------------------------------------------------------------------|\n\n");
	printf("  cos  |  %Lf  |", cosl(0));
	printf("  %Lf  |", cosl(1.999));
	printf("  %Lf  |", cosl(-1.676));
	printf("  %Lf  |", cosl(5.123));
	printf("  %Lf\n", cosl(-5.3123));
	printf("  s21  |  %Lf  |", s21_cos(0));
	printf("  %Lf  |", s21_cos(1.999));
	printf("  %Lf  |", s21_cos(-1.676));
	printf("  %Lf  |", s21_cos(5.123));
	printf("  %Lf\n\n", s21_cos(-5.3123));
	printf("|---------------------------------------------------------------------|\n\n");

	printf("\n  FUNCTION: s21_tan\n");
	printf("|---------------------------------------------------------------------|\n\n");
	printf("  tan  |  %Lf  |", tanl(0));
	printf("  %Lf  |", tanl(1.999));
	printf("  %Lf  |", tanl(-1.676));
	printf("  %Lf  |", tanl(5.123));
	printf("  %Lf\n", tanl(-5.3123));
	printf("  s21  |  %Lf  |", s21_tan(0));
	printf("  %Lf  |", s21_tan(1.999));
	printf("  %Lf  |", s21_tan(-1.676));
	printf("  %Lf  |", s21_tan(5.123));
	printf("  %Lf\n\n", s21_tan(-5.3123));
	printf("|---------------------------------------------------------------------|\n\n");

	printf("\n  FUNCTION: s21_acos\n");
	printf("|---------------------------------------------------------------------|\n\n");
	printf("  acos |  %Lf  |", acosl(-5));
	printf("  %Lf  |", acosl(5));
	printf("  %Lf  |", acosl(-1));
	printf("  %Lf  |", acosl(1));
	printf("  %Lf  |", acosl(0.99));
	printf("  %Lf  |", acosl(-0.99));
	printf("  %Lf\n", acosl(0));
	printf("  s21  |  %Lf  |", s21_acos(-5));
	printf("  %Lf  |", s21_acos(5));
	printf("  %Lf  |", s21_acos(-1));
	printf("  %Lf  |", s21_acos(1));
	printf("  %Lf  |", s21_acos(0.99));
	printf("  %Lf  |", s21_acos(-0.99));
	printf("  %Lf\n\n", s21_acos(0));
	printf("|---------------------------------------------------------------------|\n\n");

	printf("\n  FUNCTION: s21_asin\n");
	printf("|---------------------------------------------------------------------|\n\n");
	printf("  asin |  %Lf  |", asinl(-5));
	printf("  %Lf  |", asinl(5));
	printf("  %Lf  |", asinl(-1));
	printf("  %Lf  |", asinl(1));
	printf("  %Lf  |", asinl(0.99));
	printf("  %Lf  |", asinl(-0.99));
	printf("  %Lf\n", asinl(0));
	printf("  s21  |  %Lf  |", s21_asin(-5));
	printf("  %Lf  |", s21_asin(5));
	printf("  %Lf  |", s21_asin(-1));
	printf("  %Lf  |", s21_asin(1));
	printf("  %Lf  |", s21_asin(0.99));
	printf("  %Lf  |", s21_asin(-0.99));
	printf("  %Lf\n\n", s21_asin(0));
	printf("|---------------------------------------------------------------------|\n\n");

	printf("\n  FUNCTION: s21_atan\n");
	printf("|---------------------------------------------------------------------|\n\n");
	printf("  atan |  %Lf  |", atanl(-5));
	printf("  %Lf  |", atanl(5));
	printf("  %Lf  |", atanl(-1));
	printf("  %Lf  |", atanl(1));
	printf("  %Lf  |", atanl(0.99));
	printf("  %Lf  |", atanl(-0.99));
	printf("  %Lf\n", atanl(0));
	printf("  s21  |  %Lf  |", s21_atan(-5));
	printf("  %Lf  |", s21_atan(5));
	printf("  %Lf  |", s21_atan(-1));
	printf("  %Lf  |", s21_atan(1));
	printf("  %Lf  |", s21_atan(0.99));
	printf("  %Lf  |", s21_atan(-0.99));
	printf("  %Lf\n\n", s21_atan(0));
	printf("|---------------------------------------------------------------------|\n\n");

    return 0;
}

void viewGreeting() {
	printf("\n");
	printf("|─────────────────────────────────────────────────────────────────────|\n");
	printf("|────────────╔════╗╔═══╗╔══╗╔════╗╔══╗───╔══╗╔╗╔╗╔╗─╔╗╔══╗────────────|\n");
	printf("|────────────╚═╗╔═╝║╔══╝║╔═╝╚═╗╔═╝║╔═╝───║╔═╝║║║║║╚═╝║║╔═╝────────────|\n");
	printf("|──────────────║║──║╚══╗║╚═╗──║║──║╚═╗───║╚═╗║║║║║╔╗─║║║──────────────|\n");
	printf("|──────────────║║──║╔══╝╚═╗║──║║──╚═╗║───║╔═╝║║║║║║╚╗║║║──────────────|\n");
	printf("|──────────────║║──║╚══╗╔═╝║──║║──╔═╝║───║║──║╚╝║║║─║║║╚═╗────────────|\n");
	printf("|──────────────╚╝──╚═══╝╚══╝──╚╝──╚══╝───╚╝──╚══╝╚╝─╚╝╚══╝────────────|\n");
	printf("|─────────────────────────────────────────────────────────────────────|\n");
}
