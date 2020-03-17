#include<stdio.h>
#include<conio.h>
int factorial(int x);

void main()
{
	int a, fact;

	printf("Enter any number");
	scanf("%d", &a);

	fact = factorial(a);
	printf("factorial value = %d\n", fact);
	getch();
	clrscr();
}
int factorial(int x)
{
	int f = 1, i;

	for(i=x; i>=1; i--)
		f = f * i;
	return(f);
}