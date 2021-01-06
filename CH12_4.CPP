#include<stdio.h>
#include<conio.h>
#define SQUARE(n) (n * n)
#undef SQUARE(n) (n * n)

void main()
{
	int j;
	j = 64 / SQUARE(4);
	printf("j = %d\n", j);
	getch();
	clrscr();
}
