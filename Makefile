FLAGS = -W -Wall -Wunused -Wcast-align -Werror -pedantic -pedantic-errors -fstack-protector-all -Wfloat-equal -Wpointer-arith -Wwrite-strings -Wcast-align -Wno-long-long -Wmissing-declarations -O3

all: a01.out a02.out a03.out a04.out a05.out a06.out a07.out  a08.out a09.out a10.out a11.out a12.out

list.o: list.c
	gcc -c $(FLAGS) list.c -o list.o

a01.out: main01.o solve01.o list.o
	gcc $(FLAGS) main01.o solve01.o list.o -o a01.out
main01.o: main01.c
	gcc -c $(FLAGS) main01.c -o main01.o
solve01.o: solve01.c
	gcc -c $(FLAGS) solve01.c -o solve01.o
