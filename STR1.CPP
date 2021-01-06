#include<stdio.h>
#include<conio.h>
#include<string.h>
#define LOWER(x) (x>96 && x<123)
#define UPPER(y) (y>65 && y<90)

void main()
{
	char arr[20];
	char ch;
	int i;
	printf("Enter the choice:");
	printf("1: If the string is uppercase\n");
	printf("2: If the string is lowercase\n");
	printf("choice:");
	scanf("%d", &i);
	switch(i)
	{
		case 1:
			printf("Enter the string:");
			gets(arr);
			strlwr(arr);
			printf("%s\n", arr);
		break;
		case 2:
			printf("Enter the string:");
			gets(arr);
			strupr(arr);
			printf("%s\n", arr);
		break;
	}
	getch();
	clrscr();
}




