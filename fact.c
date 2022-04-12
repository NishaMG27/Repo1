#include<stdio.h>

void factnum()
{

int n, i;
    unsigned long long fact = 1;
        printf("\nEnter an integer: \n");
	    scanf("%d", &n);

		     if (n < 0)
		             printf("Error! Factorial of a negative number doesn't exist.\n");
		                 else {
		                         for (i = 1; i <= n; ++i) {
		                                     fact *= i;
		                                             }
		        printf("Factorial of %d = %llu\n", n, fact);
		    }
}
