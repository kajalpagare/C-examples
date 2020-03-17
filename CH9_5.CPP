#include<stdio.h>
#include<conio.h>
void swapr(int *, int *);

void main()
{
	int a=10, b=20;
	swapr(&a, &b);
	printf("a = %d b = %d\n", a, b);
	getch();
	clrscr();
}
void swapr(int *x, int *y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
}