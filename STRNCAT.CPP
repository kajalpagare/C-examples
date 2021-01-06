#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char source[] = "Folks!";
	char target[30] = "Hello";
	strncat(target, source, 5);
	printf("source string = %s\n", source);
	printf("target string = %s\n", target);
	getch();
	clrscr();
}