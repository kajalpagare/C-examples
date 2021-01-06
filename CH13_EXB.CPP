// Write a program to copy the contents of one array into another in the reverse order.

#include<stdio.h>
#include<conio.h>
void array(int arr[], int len);

void main()
{
	int original_arr[] = {1, 2, 3, 4, 5};
	int len = sizeof(original_arr) / sizeof(original_arr[0]);
	int copied_arr[5];
	int i, j;

	for(i=0; i<len; i++)
	{
		copied_arr[i] = original_arr[len-i-1];
	}
	printf("\nOriginal array: ");
	array(original_arr, len);
	printf("\nResultant array: ");
	array(copied_arr, len);
	getch();
	clrscr();
}
void array(int arr[], int len)
{
	int i;
	for(i=0; i<len; i++)
	{
		printf("%d", arr[i]);
	}
}
