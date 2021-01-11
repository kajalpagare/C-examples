#include<stdio.h>
#include<conio.h>
int xstrstr(char *, char *);

void main()
{
	char *string1 = "international";
	char *string2 = "nation";
	int p;
	p = xstrstr(string1, string2);
	if(p)
	{
		printf("%s is present in %s", string2, string1);
	}
	else
		printf("string not found");
	getch();
	clrscr();
}
int xstrstr(char *s, char *t)
{

	int count =0 ;
	while(*s !='\0')
	{
	      if (*s == *t){
	       break;
	      }
	      count++;
	      s++;
	}
	return (count);
}