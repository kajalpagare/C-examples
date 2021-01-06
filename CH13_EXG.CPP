// Write  a program to implement the following tasks:
// - Initialize an integer array of 10 elements in main()
// - Pass the entire array to a function modify()
// - In modify() multiply each element of array by 3
// - Return the control to main() and print the new array elements in main()

#include<stdio.h>
#include<conio.h>
int modify(int *);

void main()
{
	int i, a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	printf("Array before modification: \n\n");
	for(i=0; i<10; i++)
	{
		printf("%d ", a[i]);
	}
	modify(a);
	printf("\n\n\nArray after modification: \n\n");
	for(i=0; i<10; i++)         //printing array in main()
	{
		printf("%d ", a[i]);
	}
	getch();
	clrscr();
}
int modify(int *j)
{
	int c;
	for(c=0; c<10; c++, j++)
	{
		*j = *j * 3;    //multiply each element by 3
	}
	return *j;	//returning the whole array to main()
}


