/* Given the coordinates (x,y) of center of a circle and its radius, write a program that will determine whether a point lies inside the circle or outsidee the circle.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int nCountintersections=0;
	float x, y, cx, cy, radius;
	float distance;

	printf("Program to find given point inside or outside the circle:\n");
 	printf("Enter certer point- X:");
 	scanf("%f", &cx);

 	printf("nter center point- Y:");
 	scanf("%f", &cy);

 	printf("Enter radius:");
 	scanf("%f", &radius);

 	printf("Enter point X:");
 	scanf("%f", &x);

 	printf("Enter point Y:");
 	scanf("%f", &y);

  	distance = sqrt((double)(cx-x)+(cy-y)*(cy-y));

 	printf("\nDistance between the point and the center of circle: %.4f",distance);

 	if(distance<=radius)
 		printf("\nGiven point is inside the circle");
 	else
 		printf("\nGiven point is outside the circle");
 	getch();
 	clrscr();
}
