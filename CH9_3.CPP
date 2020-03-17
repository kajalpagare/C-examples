#include<stdio.h>
#include<conio.h>

void main()
{
	int i=3;
	int *j;

	j = &i;
	printf("Address of i = %u\n", &i);
	printf("Address of i = %u\n", j);
	printf("Address of j = %u\n", &j);
	printf("value of j = %u\n", j);
	printf("value of i = %d\n", i);
	printf("value of i = %d\n", *(&i));
	printf("value of i = %d\n", *j) ;
	getch();
	clrscr();
}