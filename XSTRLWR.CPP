#include<stdio.h>
#include<conio.h>
#include<string.h>
#define LOWER(x) (x>96 && x<123)
#define UPPER(y) (y>64 && y<91)
void xstrlwr(char *);
void main()
{
	char arr[20];
	printf("Enter the string:");
	scanf("%s", &arr);
       //	printf("the array of string is: %s\n", arr);
	printf("%s",arr);
	xstrlwr(arr);
	printf("%s",arr);

	getch();
	clrscr();
}
void xstrlwr(char *s)
{
	while(*s !='\0')
	{
		char ch = *s;
		if( UPPER(ch)){
		ch = ch+32;
		*s = ch;
		}
		s++;

	}
}