/* Demonstration of call by value and call by reference */

#include<stdio.h>
#include<conio.h>

void display1(int );
void display2(int *);
void main()
{
	int i;
	int marks[] = {55, 65, 75, 56, 78, 78, 90};
	for(i=0; i<=6; i++)
		display1(marks[i]);
	for(i=0; i<=6; i++)
		display2(&marks[i]);
	getch();
	clrscr();
}
void display1(int m)
{
	printf("%d ", m);
}
void display2(int *n)
{
	printf("%d ", *n);
}