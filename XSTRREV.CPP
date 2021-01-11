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
	for(c=0; c<length-1; c++)
	{
		end++;
	}
	for(c=0; c<length/2; c++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;
		begin++;
		end--;
	}
}

