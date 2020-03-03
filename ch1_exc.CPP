/* If the marks obtained by a student in five subjects are input through keyboard, write a program to find out the aggregate marks and percentage marks obtained by a student. */


#include<stdio.h>
#include<conio.h>

void main()
{
	int a, b, c, d, e;
	float am, pm;

	a=80; b=70; c=90; d=80; e=100;
	am = a + b + c + d + e;
	pm =  (am / 500) * 100;

	printf("%f\n%f", am, pm);
	getch();
	clrscr();
}
