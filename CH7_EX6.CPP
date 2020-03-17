#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
	int goals;

	printf("Enter the number of goals scored against India");
	scanf("%d", &goals);

	if(goals<=5)
	goto sos;
	else
	{
		printf("About time soccer players leart C\n");
		printf("and said goodbye! adieu! to soccer\n");
		exit(1);
	}
	sos:
		printf("To err is human!\n");

	getch();
	clrscr();
}