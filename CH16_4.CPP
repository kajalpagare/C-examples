#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	char *names[6];
	char n[50];
	int len, i;
	char *p;
	for(i=0; i<=5; i++)
	{
		printf("Enter name ");
		scanf("%s", n);
		len = strlen(n);
		p = (char *)malloc(len + 1);  // +1 for accomodating \o
		strcpy(p, n);
		names[i] = p;
	}
	for(i=0; i<=19; i++)
		printf("%s\n", names[i]);
	getch();
	clrscr();
}
