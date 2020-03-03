/* calculation of gross salary */

#include<stdio.h>
#include<conio.h>

void main()
{
	float bs, gs, da, hra;

	printf("Enter the basic salary");
	scanf("%f", &bs);

	if(bs < 1500)
	{
		hra = bs * 10 / 100;
	}
	else
	{
		hra = 500;
		da = bs * 98 / 100;
	}
	gs = bs + hra + da;
	printf("gross salary=Rs.%f\n", gs);

	getch();
	clrscr();
}

