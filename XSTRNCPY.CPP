#include<stdio.h>
#include<conio.h>
int xstrncpy(char *, const char *, int);

void main()
{
	char source[] = "Sayonara";
	char target[20];
	int n;
	xstrncpy(target, source, n);
	printf("source string = %s\n", source);
	printf("target string = %s\n", target);
	getch();
	clrscr();
}
int xstrncpy(char *t, const char *s, int length)
{
	int count = 0;
	length = 7;
	while(count <= length)
	{
		*t = *s;
		s++;
		t++;
		count++;
	}
	*t = '\0';
}