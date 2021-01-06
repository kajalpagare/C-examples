#include<stdio.h>
#include<conio.h>

void main()
{
int km = 10;
int m, cm;
float inch, f;

m = km * 1000;
cm = m * 100;
inch = cm * 2.54;
f = inch/12;

printf("%d\n%d\n%f\n%f", km, m, cm, inch, f);

getch();
clrscr();

}