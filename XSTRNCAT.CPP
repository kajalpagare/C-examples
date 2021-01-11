#include<stdio.h>
#include<conio.h>
void xstrncat(char *, char *, int);

void main()
{
	char source[] = "Folks!";
	char target[30] = "Hello";
	int n;
	xstrncat(target, source, n);
	printf("source string = %s\n", source);
	printf("target string = %s\n", target);
	getch();
	clrscr();
}
void xstrncat(char *p, char *q, int length)
{
	int count = 0;
	length = 4;
	while(*p != '\0')
	{
		p++;
	}
	while(count != length)
	{
		*p = *q;
		q++;
		p++;
		count++;
	}
}