
CFLAGS = -Wall -Wextra -Werror -pedantic -std=c11
GCOVFLAGS = -fprofile-arcs -ftest-coverage

HEADERS = s21_math.h 
TEST_SUITE = TEST-SUITES/TEST-FILE_001.check
SOURCES_ALL = $(wildcard ./CORE/*.c) $(wildcard ./CORE/*/*.c)


OBJ_LIBRARY := $(patsubst %.c, %.o, $(SOURCES_ALL))
%.o: %.c $(HEADER)
	gcc $(CFLAGS) -c $< -o $@


all: s21_math.a test gcov_report

s21_math.a: $(OBJ_LIBRARY) $(HEADERS)
	ar rcs s21_math.a $(OBJ_LIBRARY)
	ranlib s21_math.a
	rm -rf ./*/*.o

test: s21_math.a $(TEST_SUITE)
	checkmk clean_mode=1 $(TEST_SUITE) > TEST.c
	gcc $(CFLAGS) TEST.c s21_math.a -o test.out -lm -lcheck
	rm -f ./*/*/*.o ./*/*.o
	rm -f test.c
	./test.out

personal: s21_math.a TEST-SUITES/personal.c
	gcc $(CFLAGS) TEST-SUITES/personal.c s21_math.a -o test.out -lm -lcheck
	./test.out

gcov_report: s21_math.a $(TEST_SUITE)
	checkmk clean_mode=1 $(TEST_SUITE) > TEST.c
	gcc $(GCOVFLAGS) TEST.c $(SOURCES_ALL) -o report.out -lm -lcheck
	./report.out
	gcov -f $(SOURCES_ALL)
	lcov -t "gcov_report" -o Coverage_Report.info -c -d .
	genhtml -o ./report Coverage_Report.info
	rm -f *.gcno *.gcda *.info report.out *.gcov
	rm -f ./test.c ./*.out
	open ./report/index-sort-f.html

check:
	clang-format -style=Google -n ./*/*/*.c
	clang-format -style=Google -n ./*/*.c

rebuild: clean all

clean:
	rm -f ./*.gcno ./*.gcda ./*.info
	rm -f ./*/*/*.o ./*/*.o ./*.a
	rm -rf ./report
	rm -f ./test.c
	rm -f ./*.out
