/* Flexible array size */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int max, i, *p;
	printf("Enter array size:");
	scanf("%d", &max);
	p = (int *)malloc(max *sizeof(int));
	for(i=0; i<=5; i++)
	{
		p[i] = i * i;
		printf("%d ", p[i]);
	}
	getch();
	clrscr();
}