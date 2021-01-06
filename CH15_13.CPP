#include<stdio.h>
#include<conio.h>
int xstrcpy(char *, const char *);

void main()
{
	char source[] = "Sayonara";
	char target[20];
	xstrcpy(target, source);
	printf("source string = %s\n", source);
	printf("target string = %s\n", target);
	getch();
	clrscr();
}
int xstrcpy(char *t, const char *s)
{
	while(*s != '\0')
	{
		*t = *s;
		s++;
		t++;
	}
	*t = '\0';
}