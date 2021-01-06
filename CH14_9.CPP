/* Demo: 2-D array is an array of arrays */

#include<stdio.h>
#include<conio.h>

void main()
{
	int s[4][2] = 	{
				{1234, 56},
				{1212, 33},
				{1434, 80},
				{1312, 78},
			};
	int i;
	for(i=0; i<=3; i++)
	{
		printf("Address of 2-D array = %u %u\n", &s[i][0], &s[i][1]);
	}
	getch();
	clrscr();
}

