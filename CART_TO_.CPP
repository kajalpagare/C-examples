#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	float x, y, r, f, theta;

	printf("Enter the cartesian co-ordinates\n");
	scanf("%f %f", &x, &y);

	/* Formula for converting into polar co-ordinates */
	r = sqrt(x*x + y*y);
	f = atan(y / x);
	theta = atan(y / x);
	theta = 180.0 * theta / 3.14;
	printf("Polar coordinates are: r=%.2f theta=%.2f", r, theta);

getch();
clrscr();
}