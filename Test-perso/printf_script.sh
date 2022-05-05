#!/bin/bash

cd ../Printf-42/
make
cd ../Test-perso

if  [ "$1" == "gcc" ]
then
	gcc -Wall -Werror -Wextra test/test_main_gcc_exemple.c -L ../Printf-42 -lftprintf	
	./a.out > test_gcc_exemple.txt
	gcc -Wall -Werror -Wextra test/test_main_gcc.c -L ../Printf-42 -lftprintf
	./a.out > test_gcc.txt
	diff -au test_gcc_exemple.txt test_gcc.txt
	rm -rf a.out test_gcc_exemple.txt test_gcc.txt
elif  [ "$1" == "clang" ]
then
	clang -Wall -Werror -Wextra test/test_main_clang_exemple.c -L ../Printf-42 -lftprintf	
	./a.out > test_clang_exemple.txt
	clang -Wall -Werror -Wextra test/test_main_clang.c -L ../Printf-42 -lftprintf
	./a.out > test_clang.txt
	diff -au test_clang_exemple.txt test_clang.txt
	rm -rf a.out test_clang_exemple.txt test_clang.txt
fi
