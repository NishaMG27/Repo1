#include<stdio.h>

void fib0()

{
int t1 = 0 ;
int t2 = 1;
int nextTerm = t1 + t2;
int i , n;

  printf("\nEnter the number of terms: \n");
  scanf("%d", &n);

  printf("Fibonacci Series: %d, %d, ", t1, t2);
  for (i = 3; i <= n; ++i) {
	  printf("%d, ", nextTerm);
	  t1 = t2;
	  t2 = nextTerm;
	  nextTerm = t1 + t2;
  }
}
