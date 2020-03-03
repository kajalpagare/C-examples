/* A year is entered thr' the KB, write a prog. to deterine whether the yrea is leap year or not. Use logical operators && and ||. */

#include<stdio.h>
#include<conio.h>

void main()
{
	int y;
	printf("Enter the year\n");
	scanf("%d", &y);

	if(y%4 == 0 || y%400 == 0 && y%100 ==0)
		printf("%d is a leap year", y);
	else
		printf("%d is not a leap year", y);
	getch();
	clrscr();
}