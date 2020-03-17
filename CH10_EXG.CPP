/* If a positive integer is entered thr' KB, write a recursive function to obtain prime factors of the number. */

#include<stdio.h>
#include<conio.h>

prime(int );

void main()
{
	int x;
	printf("\nInput an integer");
	scanf("%d", &x);
	printf("Prime factors of an integer are:\n", &x);
	prime(x);
	getch();
	clrscr();
}

prime(int b)
{
	int a;
	for(a=2; a<=b; a++)
	{
		if(b%a==0)
		{
			printf("%d",a);
			prime(b/a);
			break;
		}
	}
}