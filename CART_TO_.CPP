#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
int x, y;
float r, f;

printf("Enter the cartesian co-ordinates");
printf("%d%d", x, y);
scanf("%d%d", &x, &y);

/* Formula for converting into polar co-ordinates */
r = sqrt(pow(x,2) + pow(y,2));
f = atan(y / x);
printf("%f\n%f", r,f);

getch();
clrscr();
}