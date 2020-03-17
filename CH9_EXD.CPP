/* Given three variables x, y, z write a function to circularly shift their values to right. */

#include<stdio.h>
#include<conio.h>
#include<math.h>

void func(int x, int y, int z, int *a, int *b, int *c);

void main()
{
	int x, y, z;
	printf("Enter values of x, y and z:");
	scanf("%d %d %d", &x, &y, &z);
	func(x, y, z, &x, &y, &z);
	printf("After circular shift values are:\ny=%d z=%d x=%d", x, y, z);
	getch();
	clrscr();
}
void func(int x, int y, int z, int *a, int *b, int *c)
{
	*a = z;
	*b = y;
	*c = x;
}
