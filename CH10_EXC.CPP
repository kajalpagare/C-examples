/* Write a recursive function to obtain the first 25 numbers of a fibonacci sequence. */

#include<stdio.h>
#include<conio.h>

int fib(int n);

void main()
{
	int i;
	int n;
	printf("Enter last term required:");
	scanf("%d", &n);
	for(i=1; i<n+1; i++)
		printf("%d\n", fib(i));
	getch();
	clrscr();
}
int fib(int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return(fib(n-1)+fib(n-2));
}
