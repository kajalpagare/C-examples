/* A certain grade of steel is graded according to the following condtions 1) Hardness must be greater than 50. 2) Carbon content must be less than 0.7. 3) Tensile strength must be greater than 5600. Write a prog., which will require the user to give values of hardness, cc and tensile strength of the steel under consideration and output the grade of the steel. */

#include<stdio.h>
#include<conio.h>

void main()
{
	int h, ts;
	float cc;
	printf("Enter hardness, tensile strength and carbon content");
	scanf("%d %d %f", &h, &ts, &cc);

	if(h>50 && cc<0.7 && ts>5600)
		printf("grade is 10\n");
	else if(h>50 && cc<0.7)
		printf("grade is 9\n");
	else if(cc<0.7 && ts>5600)
		printf("grade is 8\n");
	else if(h>50 && ts>5600)
		printf("grade is 7\n");
	else if(h>50 || ts>5600 || cc<0.7)
		printf("grade is 6\n");
	else
		printf("grade is 5\n");

 	getch();
 	clrscr();
}