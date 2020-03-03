/* If the three sides of a triangle are entered thr' KB, write a prog. to check whether the triangle is valid or not. The triangle is valid if the sum of two sides is greater than the largest of the three sides. */

#include<stdio.h>
#include<conio.h>

void main()
{
	int a, b, c;

	printf("Enter three sides of triangle");
	scanf("%d %d %d", &a, &b, &c);
	if(a>b && a>c)
	{
		if(a<(b+c))
			printf("the triangle is valid\n");
	}
	else
		printf("the triangle is not valid\n");

	getch();
	clrscr();
}
