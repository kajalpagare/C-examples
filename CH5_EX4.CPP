/* Write a prog. to print all ASCII valuesand their equivalent characters using a while loop. The ASCII value vary from 0 to 255. */

#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0;
	char c;
	while(i<=255)
	{
		printf("%d=%c\n",i ,i);
		i++;
	}
	getch();
	clrscr();
}
