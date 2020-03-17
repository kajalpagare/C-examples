/* Write a prog. to print out all armstrong numbers between 1 and 500. If sum of cubes of each digit of the number is equal to the number itself, then the numver is called an armstrong number.*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int a, b, c, d, e, f, res, num=1;
	printf("Armstrong numbers from 1 to 500\n");
	while(num<=500)
	{
		a = num % 10;
		b = num / 10;
		c = num % 10;
		d = num / 10;
		e = num % 10;
		f = num / 10;
		if(num==(a * a * a) + (c * c * c) + (e * e * e))
		{
			printf("\n%d", num);
		}
		num++;
	}
	getch();
	clrscr();
}