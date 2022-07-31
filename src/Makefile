
FLAGS = -Wall -Werror -Wextra -pedantic -std=c11

FILES_c = s21_sin.c s21_cos.c s21_tan.c s21_asin.c s21_acos.c s21_atan.c
FILES_o = s21_sin.o s21_cos.o s21_tan.o s21_asin.o s21_acos.o s21_atan.o

all: s21_math.a gcov_report test

s21_math.a: s21_math.h $(FILES_c)
	gcc $(FLAGS) -c $(FILES_c)
	ar rc s21_math.a $(FILES_o)
	rm -f $(FILES_o)

# TODO test : Необходимо поправить названия файлов
test: s21_math.a test.c
	gcc $(FLAGS) test.c -o test -lcheck -L. s21_math.a -lm

# TODO gcov_report : Необходимо поправить названия файлов
gcov_report:
	gcc $(FLAGS) -fprofile-arcs -ftest-coverage s21_math.c s21_sprintf.c s21_sscanf.c test.c -o test -lcheck
	./test
	lcov -t "s21_sprintf" -o s21_sprintf.info -c -d .
	lcov -t "s21_math" -o s21_math.info -c -d .
	lcov -t "s21_sscanf" -o s21_sscanf.info -c -d .
	genhtml -o gcov_report s21_math.info s21_sscanf.info
	rm -f *.gcda *.gcno *.info test

main: s21_math.a main.c
	gcc $(FLAGS) main.c -o test -lcheck -L. s21_math.a -lm

rebuild:
	make clean
	make all

clean:
	rm -f s21_math.a test
	rm -rf gcov_report
