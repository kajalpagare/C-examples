#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
int l1, l2, g1, g2;
float d;

printf("Enter the latitude and longitude of two places on the earth");
printf("%d%d%d%d", l1, l2, g1, g2);
scanf("%d%d%d%d", &l1, &l2, &g1, &g2);

/* Formula for distance in nautiocal miles */
d = 3963 * acos(sin(l1)*sin(l2) + cos(l1)*cos(l2) *cos((g2)-(g1)));
printf("%f", d);

getch();
clrscr();
}


