#include<stdio.h>
#include<conio.h>
void xstrset(char *, char *);

void main()
{
	char *string = "nation";
	char ch = 'c';
	xstrset(string, ch);
	printf("string is %s", string);
	getch();
	clrscr();
}
void xstrset(char *s, char c)
{
	while(*s != '\0')
	{
		*s = c;
		s++;
	}
}
