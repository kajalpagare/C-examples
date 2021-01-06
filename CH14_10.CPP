/* Pointer notation to access 2-D array elements */

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
	int i,j;
	for(i=0; i<=3; i++)
	{
	printf("%u %u ",(s+i) ,((s + i) + 1));
		for(j=0; j<=1; j++)
	   //		printf("%u %u ",(s+i) ,((s + i) + j));
		printf("\n");
	}
	getch();
	clrscr();
}
