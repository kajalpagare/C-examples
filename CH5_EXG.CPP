/* Write a prog. to enter numbers till the user wants. At the end it should display the count of positive, negative and zeros entered. */

#include<stdio.h>
#include<conio.h>

void main()
{
	int num, x, p=0, n=0, z=0;
	printf("How many numbers do you want to enter");
	scanf("%d", &x);
	while(x>0)
	{
		scanf("%d", &num);
		if(num>0)
		p++;
		if(num<0)
		n++;
		if(num==0)
		z++;
		x--;
	}
	printf("\nYou entered:\n%d Positive Numbers\n%d Negative numbers\n%d zeros", p, n, z);
	getch();
	clrscr();
}

