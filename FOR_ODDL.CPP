#include<stdio.h>
#include<conio.h>

void main()
{
	char another='y';
	int num;
	for(; another=='y';)
	{
		printf("Enter a number");
		scanf("%d", &num);
		printf("square of %d is %d\n", num, num*num);
		printf("want to enter another number y/n");
		fflush(stdin);
		scanf("%c", &another);
	}
	getch();
	clrscr();
}