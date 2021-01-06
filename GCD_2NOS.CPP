#include<stdio.h>
#include<conio.h>

int gcd(int p, int q);
void main()
{
	int p,q;
	printf("Enter two positive integers:");
	scanf("%d %d", &p, &q);
	printf("g.c.d of %d and %d is %d", p, q, gcd(p,q));
	getch();
	clrscr();
}
int gcd(int p, int q)
{
	if(q==0)
		return p;
	else
		return gcd(q, p%q);
}