#include<stdio.h>
#include<conio.h>

void main()
{
	char str1[] = "Hello";
	char str2[10];
	char *s = "Good Morning";
	char *q;
	str2 = str1; /* error */
	q = s;  /* works */
	getch();
	clrscr();
}