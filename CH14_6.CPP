/* Array of pointers*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int *arr[4];  /* array of integer pointers */
	int i = 31, j = 5, k = 19, l = 71, m;
	arr[0] = &i;
	arr[1] = &j;
	arr[2] = &k;
	arr[3] = &l;
	for(m=0; m<=3; m++)
	{
		printf("address=%u ", (arr[m]));
		printf("element=%d\n", *(arr[m]));
	}
	getch();
	clrscr();
}