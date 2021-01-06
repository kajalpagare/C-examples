#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	const char *arr = "ABC";
	char *target;
	target = strdup(arr);
	printf("%s", target);
	getch();
	clrscr();
}