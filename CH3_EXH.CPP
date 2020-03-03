/* Write a program to absolute value of a number entered thr' KB. */

#include<stdio.h>
#include<conio.h>

void main()
{
	int number;
	printf("\nEnter any number to find the absolute value for-");
	scanf("%d", &number);

	if(number<0)
	{
		number=(-1)*number;
		printf("\nAbsolute value is=%d", number);
	}
	getch();
	clrscr();
}