/* A 5-digit positive number is entered thr' KB, write a recursive and non-recursive function to calculate sum of digits of a 5-digit number. */

#include<stdio.h>
#include<conio.h>
sum(int );

void main()
{
	int f, i;
	printf("\nInput a 5 digit number");
	scanf("%d", &f);
	i = sum(f);
	printf("\nThe sum of the digits is %d", i);
	getch();
	clrscr();
}
sum(int n)
{
	if(n==0)
	return 0;
	else
	return(n%10+sum(n/10));
}