#include<stdio.h>
#include<conio.h>
#define LOWER(x) (x>96 && x<123)
#define UPPER(y) (y>64 && y<91)
int xstricmp(char *, char *);

void main()
{
	char string1[] = "ABS";
	char string2[] = "abc";
	int i, j, k;
       //	i = xstrcmp(string1, "Jerry");
	j = xstricmp(string1, string2);
       //	k = xstrcmp(string1, "Jerry boy");
       //	printf("%d %d %d", i, j, k);
	printf("%d", j);
	getch();
	clrscr();
}
int xstricmp(char *t, char *s)
{
	int i = 0;
	while(*s != '\0' && *t != '\0')
	{
		if(*s - *t == 32 || *s - *t == -32 || *s - *t == 0)
		{
			i = 1;
			s++;
			t++;
		} else{
		 i =0;
		 break;
		}

	}return (i);
}
