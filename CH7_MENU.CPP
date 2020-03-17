/* Write a menu driven prog. with following options:
	1. factorial of a number
	2. prime or not
	3. odd or even
	4. exit */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i, num, choice;
	float fact=1;

	while(1)
	{
		printf("Press 1 to calculate factorial valueof a number\n");
		printf("Press 2 to check whether the number is prime or not\n");
		printf("Press 3 to check whether the number is even or odd\n");
		printf("Press 4 to exit\n");
		printf("Enter the choice:\n");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
			{
				printf("Enter any number to find its factorial value");
				scanf("%d", &num);
				while(num>0)
				{
					fact = fact * num;
					num = num - 1;
				}
				printf("Factorial value = %.3f\n", fact);
			}
			break;
			case 2:
			{
				printf("Enter a number");
				scanf("%d", &num);
				i=2;
				while(i<=num-1)
				{
					if(num%i==0)
					{
						printf("Not a prime number\n");
						break;
					}
					i++;
				}
				if(i==num)
				printf("Prime number\n");
			}
			break;
			case 3:
			{
				printf("Enter an integer\n");
				scanf("%d", &num);
				if(num%2 == 0)
				printf("%d is an even number\n", num);
				else
				printf("%d is odd number\n", num);
			}
			break;
			case 4:
				printf("Exit");
				exit(0);
			break;
		}
	}
	getch();
	clrscr();
}

