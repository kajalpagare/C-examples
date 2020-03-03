/* An integer is input thr' the KB. Write a prg. to find out whether it is an odd no. or even no. */

#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
 	printf("Enter an integer:");
 	scanf("%d", &num);
 	if(num%2 == 0)
 		printf("%d is an ever number",num);
 	else
 		printf("%d is an odd number", num);

 	getch();
 	clrscr();
 }