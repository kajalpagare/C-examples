/* Demonstration of passing an array to a function */

#include<stdio.h>
#include<conio.h>
void display1(int *, int);
void display2(int [], int);

void main()
{
	int num[] = {24, 34, 12, 44, 56, 17};
	display1 (&num[0], 6);
	display2 (&num[0], 6);
	getch();
	clrscr();
}
void display1(int *j, int n)
{
	int i;
	for(i=0; i<=n-1; i++)
	{
		printf("element = %d\n", *j);
		j++;  /* Increment pointer to point to next element */
	}
}
void display2(int j[], int n)
{
	int i;
	for(i=0; i<=n-1; i++)
		printf("element = %d\n", j[i]);
}

