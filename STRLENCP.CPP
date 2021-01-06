#include<stdio.h>
#include<conio.h>
#include<string.h>
int xstrncpy(char *, const char *, int);

void main()
{
	char source[] = "Sayonara";
	char target[20];
	int len;
	len = strlen(source);
	xstrncpy(target, source, n);
	printf("source string = %s\n", source);
	printf("target string = %s\n", target);
	getch();
	clrscr();
}
int xstrncpy(char *t, const char *s, int length)
{
	int count = 0;
	length = 0;
	while(count <= length)
	{
		*t = *s;
		s++;
		t++;
		length++;
		count++;
	}
	*t = '\0';
}