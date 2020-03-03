/* Calculation of total expenses */

#include<stdio.h>
#include<conio.h>

void main()
{
	int qty, dis;
	float rate, tot;

	printf("Enter quantity and rate");
	scanf("%d%f", &qty, &rate);
	if(qty > 1000)
		dis = 10;
	else
		dis = 0;

	tot = (qty * rate) - (qty * rate * dis / 100);
	printf("Total expenses = Rs.%f\n", tot);

	getch();
	clrscr();
}