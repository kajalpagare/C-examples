/* Write a prog. to calculate overtime pay of 10 employee. Overtime is paid at the rate of Rs.12 per hr for every hr worked above 40 hrs. Assume employee do not work for fractional part of hr. */

#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1, time_worked, overtime_work, overtime_pay;
	while(i<=10)
	{
		printf("\nEnter the time employee worked in hr");
		scanf("%d", &time_worked);
		if(time_worked>40)
		{
			overtime_work = time_worked - 40;
			overtime_pay = overtime_pay  + (12 * overtime_work);
			i++;
		}
	}
	printf("\nTotal overtime pay of 10 employees is %d", overtime_pay);
	getch();
	clrscr();
}