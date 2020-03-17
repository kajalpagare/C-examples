/* A positive integer is entered thr' KB. Write a function to obtain the prime factors of this number. */

#include<stdio.h>
#include<conio.h>
#include<math.h>
void primefactors(int n);

int main()
{
	int n = 315;
	primefactors(n);
	getch();
	clrscr();
	return 0;
}
void primefactors(int n)
{
	while(n%2==0)
	{
		printf("%d", 2);
		n = n/2;
	}
	for(int i=3; i<=sqrt(n); i=i+2)
	{
		while(n%i==0)
		{
			printf("%d", i);
			n = n/i;
		}
	}
	if(n>2)
		printf("%d", n);
}