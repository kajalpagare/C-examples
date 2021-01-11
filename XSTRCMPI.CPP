#include<stdio.h>
#include<conio.h>
int xstrcmpi(char *, char *);

void main()
{
   char *string1 = "AAA", *string2 = "aaa";
   int p;

   p = xstrcmpi(string2, string1);

   if(p > 0)
      printf("string 2 is greater than string 1\n");

   if(p < 0)
      printf("string 2 is less than string 1\n");

   if(p == 0)
      printf("string 2 equals string 1\n");

   getch();
   clrscr();
}
int xstrcmpi(char *t, char *s)
{
	int i = 1;
	while(*s != '\0' && *t != '\0')
	{
		if(*s - *t == 32 || *s - *t == -32 || *s - *t == 0)
		{
			i = 1;
			s++;
			t++;
		}else{
		i=0;
		}
	}
	return (i);


}