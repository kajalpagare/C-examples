/* The distance between two cities(in km) is input through keyboard. Write a prog. to convert amd print this distance in meters, feet, inches and centimeters. */

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int km = 10;
	long int m, cm;
	float f;

	m = km * pow(10,3);
	cm = km * pow(10,5);
	f = km * 3280.84;

	printf("%d\n%d\n%d\n%f", km, m, cm, f);

	getch();
	clrscr();

}