#include<stdio.h>
#include<conio.h>
void xstrcat(char *, char *);

void main()
{
	char source[] = "Folks!";
	char target[30] = "Hello";
	xstrcat(target, source);
	printf("source string = %s\n", source);
	printf("target string = %s\n", target);
	getch();
	clrscr();
}
void xstrcat(char *p, char *q)
{
	while(*p != '\0')
	{
		p++;
	}
	while(*q != '\0')
	{
		*p = *q;
		q++;
		p++;
	}
}