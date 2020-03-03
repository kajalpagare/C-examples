/* The length and breadth of a rectangle and radius of a circle are input through keyboard. Write a program to calculate the area and perimeter of the rectangle and the area and circumference of the circle. */

#include<stdio.h>
#include<conio.h>

void main()
{
	int l=20, b=10, r=5;
	float a1, a2, p, c;

	/* Formula for area  and perimeter of rectangle */
	a1 = l * b;
	p = 2 * (l + b);
	/* Formula for area and circumference of circle */
	a2 = 3.14 * r * r;
	c = 2 * 3.14 * r;

 	printf("area of rectangle=%f\nperimeter of rectangle=%f\n", a1, p);
 	printf("area of circle=%f\ncircumference of a circle=%f", a2, c);

 	getch();
 	clrscr();
 }
