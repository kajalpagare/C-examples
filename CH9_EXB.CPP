/* Write a function that receives marks obtained by a student in 3 subjects and returns the average and percentage of these marks. */

#include<stdio.h>
#include<conio.h>

void func(int m1, int m2, int m3, float *av, float *pe);
void main()
{
	int m1, m2, m3;
	float ave, per;

	printf("Enter marks in 3 subects:");
	scanf("%d %d %d", &m1, &m2, &m3);
	func(m1, m2, m3, &ave, &per);
	printf("The average of marks is %.2f\nThe percenatage of marks is %.2f", ave, per);
	getch();
	clrscr();
}
void func(int m1, int m2, int m3, float *av, float *pe)
{
	*av = m1 + m2 + m3;
	*pe = (*av * 100) / 300;
}