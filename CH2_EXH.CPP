/* Two numbers are input thr' KB into 2 locations C and D. Write a prog. to interchange the contents of C and D. */

#include<stdio.h>
#include<conio.h>

void main()
{
int c, d, e;
clrscr();
printf("\nEnter the number at locations C:");
scanf("%d", &c);

printf("\nEnter the number at locations D:");
scanf("%d", &d);

e = c;
c = d;
d = e;
printf("\nNew number at locations C=%d", c);
printf("\nNew number at locations D=%d", d);
printf("\n\n\n\nPress any key to exit");
getch();
}
