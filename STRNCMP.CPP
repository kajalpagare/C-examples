#include <string.h>
#include<conio.h>
#include <stdio.h>

void main()

{
   char *buf1 = "Jerry", *buf2 = "Ferry", *buf3 = "Terry";
   int ptr;

   ptr = strncmp(buf2,buf1,3);
   if (ptr > 0)
      printf("buffer 2 is greater than buffer 1\n");
   else
      printf("buffer 2 is less than buffer 1\n");

   ptr = strncmp(buf2,buf3,3);
   if (ptr > 0)
      printf("buffer 2 is greater than buffer 3\n");
   else
      printf("buffer 2 is less than buffer 3\n");

   getch();
   clrscr();

}