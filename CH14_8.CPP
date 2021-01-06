#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[3][4][2] ={
				{
					{2, 4},
					{7, 8},
					{3, 4},
					{5, 6}
				},
				{
					{7, 6},
					{3, 4},
					{5, 3},
					{2, 3}
				},
				{
					{8, 9},
					{7, 2},
					{3, 4},
					{5, 1}
				}
			  };
	int i, j;
	for(i=0; i<=2; i++)
	{
		for(j=0; j<=3; j++)
			printf("%d %d\n", arr[i][j][0], arr[i][j][1]);
			printf("\n");
	}
	getch();
	clrscr();
}