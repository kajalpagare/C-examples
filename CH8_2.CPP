#include<stdio.h>
#include<conio.h>

void italy();
void brazil();
void argentina();

void main()
{
	printf("I am in main\n");
	italy();
	getch();
	clrscr();

}
void italy()
{
	brazil();
	printf("I am in italy\n");
}
void brazil()
{
	argentina();
	printf("I am in brazil\n");
}
void argentina()
{
	printf("I am in argentina\n");
}