#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char source[] = "Sayonara";
	char target[20];
	strcpy(target, source);
	printf("source string = %s\n", source);
	printf("target string = %s\n", target);
	getch();
	clrscr();
}