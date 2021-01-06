#include<stdio.h>
#include<conio.h>
void main()
{
	float r, a;
	const float pi = 3.14;
	printf("Enter radius of a circle ");
	scanf("%f", &r);
	a = pi * r * r;
	printf("Area of a circle= %f\n", a);
	getch();
	clrscr();
}