#include<stdio.h>
#include<conio.h>
int xstrcmp(char *, char *);

void main()
{
	char string1[] = "Jerry";
	char string2[] = "Jerry";
	int i, j, k;
       //	i = xstrcmp(string1, "Jerry");
	j = xstrcmp(string1, string2);
       //	k = xstrcmp(string1, "Jerry boy");
       //	printf("%d %d %d", i, j, k);
	printf("%d", j);
	getch();
	clrscr();
}
int xstrcmp(char *t, char *s)
{
	int i=1;
	while(*s != '\0' && *t != '\0')
	{
		if(*t != *s)
		{
			i=0;
			break;
		}
		s++;
		t++;
	}
	return (i);
}