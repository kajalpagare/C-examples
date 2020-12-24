//Write a program to print out all Armstrong numbers between 1 and 500.Ex.153=(1*1*1)+(5*5*5)+(3*3*3)

#include<stdio.h>
#include<conio.h>

void main()
{
int num,count=1, rem, sum;
while(count<=500)
{
	num=count;
	sum=0;
	while(num)
	{
		rem=num%10;
		sum=sum+(rem*rem*rem);
		num=num/10;
	}
	if(count==sum)
	{
		printf("%d is a Armstrong number\n", count);
	}
	count++;
}
getch();
clrscr();
}