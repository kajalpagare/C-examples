#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char string1[] = "Jerry";
	char string2[] = "Ferry";
	int i, j, k;
	i = strcmp(string1, "Jerry");
	j = strcmp(string1, string2);
	k = strcmp(string1, "Jerry boy");
	printf("%d %d %d", i, j, k);
	getch();
	clrscr();
}