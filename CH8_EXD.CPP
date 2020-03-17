/* Any year is entered through the KB. Write a function to determine whether the year is leap year or not. */

#include<stdio.h>
#include<conio.h>

leap_year(int y);
void main()
{
	int year, lp;

	printf("Enter the year:");
	scanf("%d", &year);

	lp = leap_year(year);

	if(lp)
	{
		printf("\nThe entered year is a leap year.");
	}
	else
	{
		printf("\nThe entered year is not a leap year.");
	}
	getch();
	clrscr();
}
leap_year(int y)
{
	int lp;

	if(y%4==0)
	{
		lp=1;
	}
	else
	lp=0;

	return(lp);
}