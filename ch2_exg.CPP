/* If value of an angle is input through the keyboard, write a prog. to print all its trigonometric ratios. */

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	double degree;

	printf("Enter the angle in degree:");
	scanf("%lf", &degree);

	double radian = degree * (M_PI / 180);

	printf("sin value is %lf\n", sin(radian));
	printf("cos value is %lf\n", cos(radian));
	printf("tan value is %lf\n", tan(radian));

	getch();
	clrscr();
}
