#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char arr[]= "ABC";
       // 	printf("Enter the string:");
       //	gets(arr);
	printf("the array of string is: %s\n", arr);
	strlwr(arr);
	puts(arr);
	getch();
	clrscr();
}