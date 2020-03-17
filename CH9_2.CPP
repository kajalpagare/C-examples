#include<stdio.h>
#include<conio.h>

void main()
{
	int i = 3;
	printf("Address of i=%u\n", &i);
	printf("value of i=%d\n", i);
	printf("value of i=%d\n", *(&i));
	getch();
	clrscr();
}