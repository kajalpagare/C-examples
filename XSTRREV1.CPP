#include<stdio.h>
#include<conio.h>
#include<string.h>
void xstrrev(char *);

void main()
{
	char *string = "nation";
	printf("%s\n", string);
	strrev(string);
	printf("%s", string);
	getch();
	clrscr();
}
void xstrrev(char *s)
{
	int length, c;
	char *begin, *end, temp;
	length = strlen(s);
	begin = s;
	end = s;
	while(*s != '\0')
	{
		for(c=0; c<length-1; c++)
		{
			temp = *end;
			*end = *begin;
			*begin = temp;
			begin++;
			end--;
		}
		s++;
	}
}