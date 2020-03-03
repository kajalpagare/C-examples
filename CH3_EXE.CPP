/* A five digit no. is entered thr' KB. Write a prog. to obtain the reversed number and to determine whether the original and reversed numbers are equal or not. */

#include<stdio.h>
#include<conio.h>

void main()
{
	int num, orig, rev=0, rem;
	printf("Enter a number:");
	scanf("%d", &num);
	orig=num;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(orig==rev)
	{
		printf("Reverse is equal to original");
	}
	else
	{
		printf("Reverse is not equal to original");
	}
	getch();
	clrscr();
}