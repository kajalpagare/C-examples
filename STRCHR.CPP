#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char *string = "abcdefg";
	char *p, c = 'c';
	p = strchr(string, c);
	if(p)
	{
		printf("%c is present at position  %d", c, p-string);
	}
	else
		printf("character not found");
	getch();
	clrscr();
}