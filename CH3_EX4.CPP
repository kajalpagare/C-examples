#include<stdio.h>
#include<conio.h>

void main()
{
	int i;

	printf("Enter value of i");
	scanf("%d", &i);
	if(i==5)
 		printf("You entered 5\n");
 	else
 		printf("you entered something other than 5\n");
  	getch();
  	clrscr();
}
