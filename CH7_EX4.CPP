#include<stdio.h>
#include<conio.h>

void main()
{
	char c = 'x';

	switch(c)
	{
		case 'a':
			printf("I am in case a \n");
			break;
		case 'x':
			printf("I am in case x \n");
			break;
		default:
			printf("I am in default \n");
	}
	getch();
	clrscr();
}