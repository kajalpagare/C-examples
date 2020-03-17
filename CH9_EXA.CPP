/* Write a function that receives 5 integers and returns the sum, average and std deviation of these numbers. Call this function from main() and print results in main(). */

#include<stdio.h>
#include<conio.h>
#include<math.h>

void func(int a, int b , int c ,int d, int e, int *su, float *av, float *std);

void main()
{
	int a, b, c, d, e, sum;
	float ave, sd;

	printf("Enter the five integers:");
	scanf("%d, %d, %d ,%d , %d", &a, &b, &c, &d, &e);
	func(a, b, c, d, e, &sum, &ave, &sd);
	printf("The sum is %d\nthe average is %f\nThe standard deviation is %f\n", sum, ave, sd);
	getch();
	clrscr();
}
void func(int a,int b, int c, int d, int e, int *su, float *av, float *std)
{
	*su = a + b + c + d + e;
	*av = *su / 5;
	*std = sqrt((((a - *av)*(a - *av)) + ((b - *av)*(b - *av)) + ((c - *av)*(c - *av))) / 5.0);
}
