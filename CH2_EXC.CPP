/* If the lengths of three sides of a triangle are input through keyboard, write a prog. to find the area of triangle.  */

#include<stdio.h>
#include<conio.h>
#include<math.h>

 void main()
 {
 	int a, b, c;
 	float s, area;

 	printf("Enter the three sides of triangle");
 	printf("%d%d%d", a, b, c);
 	scanf("%d%d%d", &a, &b, &c);

 	s = (a + b + c) / 2;
 	area = sqrt(s*(s-a)*(s-b)*(s-c));

 	printf("area of triangle=%f", area);

 	getch();
 	clrscr();
 }
