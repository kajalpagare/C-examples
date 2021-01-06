#include<stdio.h>
#include<conio.h>

void main()
{
	char str1[] = "Hello";
	char *p = "Hello";
	str1 = "Bye"; /* error */
	p = "Bye";  /* works */
	getch();
	clrscr();
}