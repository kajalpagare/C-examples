/* Write a function to calculate the factorial value of any integer entered thr' KB */

#include<stdio.h>
#include<conio.h>

long   factorial(int);
int main()
{
	int n;
	printf("enter a number to calculate its factorial\n");
	scanf("%d", &n);

	printf("%d! = %ld\n", n, factorial(n));

	getch();
	clrscr();
}
long factorial(int n)
{
	int c;
	long r=1;

	for(c=1; c<=n; c++)
		r = r * c;
	return r;
}