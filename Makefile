FLAGS = -g -W -Wall -Wunused -Wcast-align -Werror -pedantic -pedantic-errors -fstack-protector-all -Wfloat-equal -Wpointer-arith -Wwrite-strings -Wcast-align -Wno-long-long -Wmissing-declarations -O3

all: a01.out a08.out

list.o: list.c
	gcc -c $(FLAGS) list.c -o list.o

a01.out: main01.o solve01.o list.o
	gcc $(FLAGS) main01.o solve01.o list.o -o a01.out
main01.o: main01.c
	gcc -c $(FLAGS) main01.c -o main01.o
solve01.o: solve01.c
	gcc -c $(FLAGS) solve01.c -o solve01.o

a08.out: main08.o solve08.o list.o
	gcc $(FLAGS) main08.o solve08.o list.o -o a08.out
main08.o: main08.c
	gcc -c $(FLAGS) main08.c -o main08.o
solve08.o: solve08.c
	gcc -c $(FLAGS) solve08.c -o solve08.o
