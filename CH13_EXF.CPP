// Write a prog. using pointers to find the smallest number in an arary of 10 integers.

#include<stdio.h>
#include<conio.h>

void main()
{
	int i, n, sml, a[20];
	int *p;
	printf("how many numbers you want to enter: ");
	scanf("%d", &n);
	printf("\nEnter the number: \n");

	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
		p++;
	}
	p = &a[0];
	printf("\nNumber you enter:\n");
	for(i=0; i<n; i++)
	{
		printf("\t%d", a[i]);
	}
	p = &a[0];
	sml = a[0];
	for(i=0; i<n; i++)
	{
		if(sml > (*p))
		sml = *p;
		p++;
	}
	printf("\nSmallest digit in an array is: %d", sml);
	getch();
	clrscr();
}
