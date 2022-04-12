#include <stdio.h>
void biggest3()
	{
		int num1 , num2, num3;
		printf("Enter three number\n ");
		 scanf("%d %d %d", &num1, &num2, &num3);
		      if((num1 > num2) && (num1 > num3))
			               {
					                printf("%d is Largest\n", num1);
							     }
		               else if (num2 > num3)
				            {
						                 printf("%d is Largest\n", num2);
								          }
			            else
					             {
							              printf("%d is Largest\n",num3);
								           }
	}
