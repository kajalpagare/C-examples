#include<stdio.h>
#include<conio.h>
#include<string.h>
int xstrchr(char *, char );

void main()
{
	char *string = "abcdefg";
	int p;
	char c = 'd';
	p = xstrchr(string, c);
	if(p)
	{
		printf("%c is present in %s at position %d ", c, string, p);
	}
	else
		printf("character not found");
	getch();
	clrscr();
}
int xstrchr(char *s, char letter)
{

	int count =0 ;
	while(*s !='\0')
	{
	      if (*s == letter){
	       break;
	      }
	      count++;
	      s++;
	}
	return (count);
}