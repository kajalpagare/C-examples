#include<stdio.h>
#include<conio.h>
#include "interest.h"
/* #define INTEREST(x, y, z) ((x * y * z) / 100)
#define AMOUNT(x, y) (x + y) */

void main()
{
	int p, n, a;
	float r, si;

	printf("Enter the values of p, n and r:");
	scanf("%d %d %f", &p, &n, &r);

	si = INTEREST(p, n, r);
	a = AMOUNT(p, n);

	printf("simple interest = %f amount= %d", si, a);
	getch();
	clrscr();
}