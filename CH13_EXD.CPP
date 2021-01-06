// Twenty-five numbers are entered from the KB into an array. Write a prog. to find out how many of them are positive, how many are negative, how many are even and odd.

#include<stdio.h>
#include<conio.h>

void main()
{
	int i, arr[10], tp = 0, tn = 0, tz = 0, te = 0, to = 0, num;
	printf("Enter numbers in array: \n");
	for(i=0; i<10; i++)
	{
		scanf("%d", &arr[i]);
		if(arr[i] < 0)
		{
			tn = tn + 1;
		}
		if(arr[i] == 0)
		{
			tz = tz + 1;
		}
		if(arr[i] > 0)
		{
			tp = tp + 1;
		}
		if(arr[i] % 2 == 0)
		{
			te = te + 1;
		}
		else
			to = to + 1;
	}

	printf("\n\nTotal zeros= %d\n", tz);
	printf("Total positive numbers= %d\n", tp);
	printf("Total negative numbers= %d\n", tn);
	printf("Total even numbers= %d\n", te);
	printf("Total odd numbers= %d\n", to);
	getch();

	clrscr();
}