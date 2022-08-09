
SRC = ./src

FLAGS = -Wall -Werror -Wextra -pedantic -std=c11

FILES_c = $(SRC)/s21_sin.c $(SRC)/s21_cos.c $(SRC)/s21_tan.c $(SRC)/s21_asin.c $(SRC)/s21_acos.c $(SRC)/s21_atan.c
FILES_o = s21_sin.o s21_cos.o s21_tan.o s21_asin.o s21_acos.o s21_atan.o

all: s21_math.a test

s21_math.a: $(SRC)/s21_math.h $(FILES_c)
	gcc $(FLAGS) -c $(FILES_c)
	ar rc s21_math.a $(FILES_o)
	rm -f $(FILES_o)

test: s21_math.a $(SRC)/main.c
	gcc $(FLAGS) $(SRC)/main.c -o test s21_math.a

rebuild:
	make clean
	make all

clean:
	rm -f s21_math.a test
