#include<stdio.h>
#include<conio.h>

void main()
{
	char name[25];
	printf("Enter your full name:");
	scanf("%[^\n]s", name);
	printf("Hello %s!\n", name);
	getch();
	clrscr();
}