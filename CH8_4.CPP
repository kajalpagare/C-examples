#include<stdio.h>
#include<conio.h>

void fun(int);
int main()
{
	int a=30;
	fun(a);
	printf("%d\n", a);
	getch();
	clrscr();
}
void fun(int b)
{
	b = 60;
	printf("%d\n", b);
}