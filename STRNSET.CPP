#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char *string = "nation";
	char ch = 'c';
	strnset(string, ch, 3);
	printf("string is %s", string);
	getch();
	clrscr();
}