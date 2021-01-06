#include<stdio.h>
#include<conio.h>
#define PI 3.141
#define AREA(x, y, z) (PI * x * x + y * z)

void main()
{
	float a = AREA(1, 5, 8);
	float b = AREA( AREA(1, 5, 8), 4, 5);
	printf("a = %f\n", a);
	printf("b = %f\n", b);
	getch();
	clrscr();
}