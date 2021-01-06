// Twenty-five numbers are entered thr' KB into an array. The number to be searched is entered thr' the KB by the user.
// Write a program to find if the number to be searched is present in the array and if it present, display the number of times it appears in the array.

#include<stdio.h>
#include<conio.h>

void main()
{
	int i, arr[25], prsnt = 0, num;
	printf("Please enter 25 numbers:\n");
	for(i=0; i<25; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\n\nPlease enter the number to be searched: ");
	scanf("%d", &num);
	for(i=0; i<25; i++)
	{
		if(num==arr[i])
			prsnt = prsnt + 1;
	}
	if(prsnt == 0)
	{
		printf("\nNumber is not present in the array.\n");
	}
	else
	{
		printf("\n\nNumber present in the array\n");
		printf("\nNumber of times it appears = %d\n", prsnt);
	}
	getch();
	clrscr();
}