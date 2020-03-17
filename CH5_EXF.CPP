/* Write aprog. for a matchstick game being played between the computer and a user. your prog. should ensure that the computer always wins. Rules:
	- there are 21 matchsstiks.
	- the computer asks the player to pick 1,2, 3 or 4 matchsticks.
	- after the person picks, computer does its picking.
	- whoever is forcedv to pick up the last matchtick loses the game. */

#include<stdio.h>
#include<conio.h>

void main()
{
	int x, y, n=21;
	printf("The total amount of matchsticks id 21");

	while(n>1)
	{
		printf("\nEnter your choice:");
		scanf("%d", &x);
		if((1<=x) && (x<=4))
		{
			n = n - x;
			printf("\nThe user chose %d, the matchsticks left %d", x, n);
		}
	else
	{
		printf("Wrong Entry");
		break;
	}

		y = 5 - x;
		n = n - y;
		printf("The computer chose %d, the matchstiks left %d", y,n);
	}

	if(n==1)
	printf("\nLast matchstick left, You lose");
	getch();
	clrscr();
}