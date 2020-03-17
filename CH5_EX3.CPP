/*Two nos. are entered thr' KB. Write a prog. to find the value of one no. raised to the power of another. */

#include<stdio.h>
#include<conio.h>

void main()
{
	int num1, num2, i=1,ans=1;

	printf("Enter any two numbers");
	scanf("%d %d", &num1, &num2);

	while(i<=num2)
	{
		ans = ans*num1;
		i++;
	}
	printf("Answer is %d", ans);
	getch();
	clrscr();
}

