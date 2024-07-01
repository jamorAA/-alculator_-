CC	=	gcc 
CFLAGS = -Wall -Wextra -Werror -std=c11 -g
SOURCES = s21_calc_back.c
OBJECTS = s21_calc_back.o
TESTEXEC = tests/tests
BUILD_DIR = build
ALL_PROJECT = *.c *.h qt_project/*.cpp qt_project/*.h tests/*.c
EXEC = /build/calc.app/Contents/MacOS/calc


LIBS_ADDITIONAL = 
ifeq ($(OS), Windows_NT)
    detected_OS := Windows
else
    detected_OS := $(shell uname -s)
endif

ifeq ($(detected_OS), Linux)
	detected_Linux := $(shell cat /etc/issue | sed -n '1p' | awk '{print $$1}')
	ifeq ($(detected_Linux), Arch)
	LIBS_ADDITIONAL = -lm
	EXEC = /build/calc
	endif

	ifeq ($(detected_Linux), Ubuntu)
	LIBS_ADDITIONAL = -lm -lsubunit
	EXEC = /build/calc
	endif
	
	ifeq ($(detected_Linux), Debian)
	LIBS_ADDITIONAL = -lm -lsubunit
	EXEC = /build/calc
	endif
endif

all: install open

install:
		[ -d $(BUILD_DIR) ] || mkdir -p $(BUILD_DIR)
		cd build && qmake ../qt_project
		make -C ./build/

open:
		.$(EXEC)

uninstall: clean
		rm -Rf build/
		rm -rf calc.tar

clean:
		rm -rf tests/*.html tests/*.css
		rm -f $(TESTEXEC) ../calc.tar .gitkeep .DS_Store qt_project/.qmake.stash
		find . -name '*.gcno' -type f -delete
		find . -name '*.gcda' -type f -delete
		find . -name '*.gcov' -type f -delete
		rm -rf *.o .qmake.stash .clang-format
		rm -rf qt_project/.qtc_clangd/
		rm -rf qt_project/.clang-format

dvi:
		open README.md

dist: uninstall clean
	cd ../ && tar -cf calc.tar src

test: 
	find . -name '*.gcda' -type f -delete
	$(CC) $(CFLAGS) -c tests/tests.c
	$(CC) $(CFLAGS) tests.o --coverage $(SOURCES) -o $(TESTEXEC) -lcheck $(LIBS_ADDITIONAL)
	./$(TESTEXEC)
	gcov s21_calc_back.gcda

gcov_report: test
	gcovr -b
	gcovr
	gcovr --html-details -o tests/report.html
	open tests/report.html
	find . -name '*.gcno' -type f -delete
	find . -name '*.gcda' -type f -delete

check: test
	cppcheck --enable=all --force --check-config for details $(ALL_PROJECT)
	cp ../materials/linters/.clang-format .clang-format
	cp ../materials/linters/.clang-format qt_project/.clang-format
	clang-format -n $(ALL_PROJECT)
	rm -rf .clang-format

lint: test
	cp ../materials/linters/.clang-format .clang-format
	cp ../materials/linters/.clang-format qt_project/.clang-format
	clang-format -n $(ALL_PROJECT)
	rm -rf .clang-format
