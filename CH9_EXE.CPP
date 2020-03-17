/* Write a function to compute the greatest common divisor given by euclid's algorithm. */

#include<stdio.h>
#include<conio.h>
#include<math.h>

void func(int a, int b, int c, float *s, float *are);

void main()
{
	int a, b, c;
	float s, area;

	printf("Enter three sides of triangle");
	scanf("%d %d %d", &a, &b, &c);
	func(a, b, c, &s, &area);
	printf("The area of triangle is %f", area);
	getch();
	clrscr();
}
void func(int a, int b, int c, float *s, float *are)
{
	*s = (a + b + c) / 2;
	*are = sqrt(*s * (*s - a) * (*s - b) * (*s - c));
}