#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char *string1 = "international";
	char *string2 = "nation";
	char *p;
	p = strstr(string1, string2);
	if(p)
	{
		printf("%s is present in %s", string2, string1);
	}
	else
		printf("string not found");
	getch();
	clrscr();
}