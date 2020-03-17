#include<stdio.h>
#include<conio.h>

void areaperi(int, float *, float *);

void main()
{
	int radius;
	float area, perimeter;

	printf("Enter radius of circle");
	scanf("%d", &radius);
	areaperi(radius, &area, &perimeter);

	printf("Area = %f\n", area);
	printf("Perimeter = %f\n", perimeter);
	getch();
	clrscr();
}
void areaperi(int r, float *a, float *p)
{
	*a = 3.14 * r * r;
	*p = 2 * 3.14 * r;
}