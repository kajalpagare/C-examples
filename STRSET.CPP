#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char *string = "nation";
	char ch = 'c';
	strset(string, ch);
	printf("string is %s", string);
	getch();
	clrscr();
}