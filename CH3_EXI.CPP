/* Give the length and breadth of rectangle, write a prog. to find whether the area of rectangle is greater than its perimeter. */

#include<stdio.h>
#include<conio.h>

void main()
{
	int length, breadth, perimeter, area;

	printf("Enter length and breadth-");
	scanf("%d %d", &length, &breadth);

	area = length * breadth;
	perimeter = 2 * (length + breadth);

	printf("Area is : %d", area);
	printf("\nPerimeter is : %d", perimeter);

	if(area>perimeter)
		printf("\nArea is greater than perimeter");
	else if(area<perimeter)
		printf("\nArea is less than perimeter");
	else
		printf("Area and perimeter are equal");

	getch();
	clrscr();
}
