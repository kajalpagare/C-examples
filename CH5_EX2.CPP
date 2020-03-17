/* Write a prog. to find the factorial value of any no. entered thr' KB. */

#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	float fact=1;
	printf("Enter any number to find its factorial value:");
	scanf("%d", &num);
	while(num>0)
	{
		fact = fact * num;
		num = num - 1;
	}
	printf("\nFactorial value = %.3f", fact);
	getch();
	clrscr();
}