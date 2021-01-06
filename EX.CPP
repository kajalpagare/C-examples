#include<stdio.h>
#include<conio.h>

void main()
{
int km = 10;
float m, cm, f;

m = km * 1.0e3;
f = km * 3281;
cm = km * 1.0e5;

printf("%d\n%d\n%f\n%d", km, m, f, cm);

getch();
clrscr();

}