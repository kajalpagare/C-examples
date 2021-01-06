#include<stdio.h>
#include<conio.h>
void main()
{
	char name[] = "Klinsman";
	char *ptr;
	ptr = name;  /* store base address of string */
	while(*ptr != '\0')
	{
		printf("%c", *ptr);
		ptr++;
	}
	printf("\n");
	getch();
	clrscr();
}
