/* Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this temp. into centigragde degrees. */

#include<stdio.h>
#include<conio.h>

void main()
{
	int f = 80;
	float c;

	c = (f - 32) * 5 / 9;
	printf("Temp. in degree centigrade= %f", c);
	getch();
	clrscr();
 }
