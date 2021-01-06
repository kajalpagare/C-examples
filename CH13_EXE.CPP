// If an array arr contains n elements, then write a prog. to check if arr[0] = arr[n-1] rr[1] = arr[n-2] and so on.

#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[10];
	int n, i, f=0;
	printf("enter total elements of array(n): ");
	scanf("%d", &n);
	printf("\n\nenter\"n\"elements of array: \n\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
		if(arr[i] == arr[n-(i+1)])  // if element is equal, accordingly to the problem, it will be printed.
		{
			f = f + 1;
			printf("element no: %d=%d", i, arr[i]);
		}
	}

	if(f == 0)
		printf("\n\nNo such element found. \n");
	clrscr();
	getch();
}