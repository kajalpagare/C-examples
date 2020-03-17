/* Write a prog. to receive an integer and find its octal equivalent. */

#include<stdio.h>
#include<conio.h>

void main()
{
	long int i, num, arr[100];
	clrscr();

	printf("Enter any number to convert into Octal:");
	scanf("%ld", &num);
	for(i=0; num>8; i++)
	{
		arr[i] = num % 8;
		num = num / 8;
	}
	printf("Octal Conversion is\n");
	printf("%d", num);
	while(i>0)
	{
		printf("%d", arr[i-1]);
		i--;
	}
	getch();
}
