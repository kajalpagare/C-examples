#include<string.h>
#include<stdio.h>
#include<conio.h>

void main()
{
   char target[] = "KAJAL";
   char source[] = "kajal";
   int a;

   a = stricmp(source, target);
   a = strcmpi(source, target);   // same as stricmp

   if (a > 0)
      printf("source is greater than target\n");

   if (a < 0)
      printf("source is less than target\n");

   if (a == 0)
      printf("source equals target\n");

   getch();
   clrscr();
}