FLAGS = -W -Wall -Wunused -Wcast-align -Werror -pedantic -pedantic-errors -fstack-protector-all -Wfloat-equal -Wpointer-arith -Wwrite-strings -Wcast-align -Wno-long-long -Wmissing-declarations -O3

all: a01.out a02.out a03.out a04.out a05.out a06.out a07.out a08.out a09.out a10.out

list.o: list.c
	gcc -c $(FLAGS) list.c -o list.o

a01.out: main01.o solve01.o list.o
	gcc $(FLAGS) main01.o solve01.o list.o -o a01.out
main01.o: main01.c
	gcc -c $(FLAGS) main01.c -o main01.o
solve01.o: solve01.c
	gcc -c $(FLAGS) solve01.c -o solve01.o

a02.out: main02.o solve02.o list.o
	gcc $(FLAGS) main02.o solve02.o list.o -o a02.out
main02.o: main02.c
	gcc -c $(FLAGS) main02.c -o main02.o
solve02.o: solve02.c
	gcc -c $(FLAGS) solve02.c -o solve02.o

a03.out: main03.o solve03.o list.o
	gcc $(FLAGS) main03.o solve03.o list.o -o a03.out
main03.o: main03.c
	gcc -c $(FLAGS) main03.c -o main03.o
solve03.o: solve03.c
	gcc -c $(FLAGS) solve03.c -o solve03.o

a04.out: main04.o solve04.o list.o
	gcc $(FLAGS) main04.o solve04.o list.o -o a04.out
main04.o: main04.c
	gcc -c $(FLAGS) main04.c -o main04.o
solve04.o: solve04.c
	gcc -c $(FLAGS) solve04.c -o solve04.o

a05.out: main05.o solve05.o list.o
	gcc $(FLAGS) main05.o solve05.o list.o -o a05.out
main05.o: main05.c
	gcc -c $(FLAGS) main05.c -o main05.o
solve05.o: solve05.c
	gcc -c $(FLAGS) solve05.c -o solve05.o

a06.out: main06.o solve06.o list.o
	gcc $(FLAGS) main06.o solve06.o list.o -o a06.out
main06.o: main06.c
	gcc -c $(FLAGS) main06.c -o main06.o
solve06.o: solve06.c
	gcc -c $(FLAGS) solve06.c -o solve06.o

a07.out: main07.o solve07.o list.o
	gcc $(FLAGS) main07.o solve07.o list.o -o a07.out
main07.o: main07.c
	gcc -c $(FLAGS) main07.c -o main07.o
solve07.o: solve07.c
	gcc -c $(FLAGS) solve07.c -o solve07.o

a08.out: main08.o solve08.o list.o
	gcc $(FLAGS) main08.o solve08.o list.o -o a08.out
main08.o: main08.c
	gcc -c $(FLAGS) main08.c -o main08.o
solve08.o: solve08.c
	gcc -c $(FLAGS) solve08.c -o solve08.o

a09.out: main09.o solve09.o list.o
	gcc $(FLAGS) main09.o solve09.o list.o -o a09.out
main09.o: main09.c
	gcc -c $(FLAGS) main09.c -o main09.o
solve09.o: solve09.c
	gcc -c $(FLAGS) solve09.c -o solve09.o

a10.out: main10.o solve10.o list.o
	gcc $(FLAGS) main10.o solve10.o list.o -o a10.out
main10.o: main10.c
	gcc -c $(FLAGS) main10.c -o main10.o
solve10.o: solve10.c
	gcc -c $(FLAGS) solve10.c -o solve10.o
