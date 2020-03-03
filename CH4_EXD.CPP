/* If the 3 sides of a triangle are entered thr' the KB, write a prog. to check whether the triangle is isosceles, equilateral, scalane or right angled triangle. */

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int a, b, c;
	printf("Enter three side of triangle");
	scanf("%d %d %d",&a, &b, &c);

	if(a==b && a==c)
		printf("Triangle is equilateral\n");

	else if(a==b || a==c || b==c)
		printf("Triangle is isosceles\n");

	else if(a!=b && a!=c && b!=c)
		printf("triangle is scalane\n");

	/* else if((b*b)=((a*a)+(c*c)))  */
	/* printf("triangle is right angled\n");*/

	getch();
	clrscr();
}

