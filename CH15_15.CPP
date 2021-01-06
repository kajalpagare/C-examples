#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
	char source[] = "Folks!";
	char target[30] = "Hello";
	strcat(target, source);
	printf("source string = %s\n", source);
	printf("target string = %s\n", target);
	getch();
	clrscr();
}