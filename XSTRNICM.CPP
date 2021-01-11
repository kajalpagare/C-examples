#include<stdio.h>
#include<conio.h>
int xstrnicmp(char *, char *, int );

void main()
{
	char string1[] = "ABCD";
	char string2[] = "abcc";
	int i, j, k, n;
       //	i = xstrcmp(string1, "Jerry");
	j = xstrnicmp(string1, string2, n);
       //	k = xstrcmp(string1, "Jerry boy");
       //	printf("%d %d %d", i, j, k);
	printf("%d", j);
	getch();
	clrscr();
}
int xstrnicmp(char *t, char *s, int length)
{
	int i = 0;
	int count = 0;
	length = 4;
	while(*s != '\0' && *t != '\0' && count < length)
	{
		if(*s - *t == 32 || *s - *t == -32 || *s - *t == 0)
		{
			s++;
			t++;
			count++;
			i = 1;
		}  else{
		i=0;
		break;
		}
	}        return (i);
}