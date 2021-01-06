#include<stdio.h>
#include<conio.h>


void main()
{
	int i = 2;
	#ifdef DEF
		i*=i;
	#else
		printf("%d\n", i);
	#endif
	getch();
	clrscr();
}