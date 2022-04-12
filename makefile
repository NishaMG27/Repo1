ABC.exe:main.o big2.o fact.o big3.o fib.o pal.o sumof2.o
	gcc -o ABC.exe main.o big2.o fact.o big3.o fib.o pal.o sumof2.o
main.o:main.c
	gcc -c main.c
big2.o:big2.c
	gcc -c big2.c
fact.o:fact.c
	gcc -c fact.c
big3.o:big3.c
	gcc -c big3.c
fib.o:fib.c
	gcc -c fib.c
pal.o:pal.c
	gcc -c pal.c
sumof2.o:sumof2.c
	gcc -c sumof2.c
