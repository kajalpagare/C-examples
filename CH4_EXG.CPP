/* The body mass index (BMI) is defined as ratio of weight of a person (in kgs) to the square of the height (in meters). Write a program that receives weight and height, calculates the BMI, and reports the BMI category as per the following table: BMI category	BMI
	starvation	<15
	anorsic		15.1-17.5
	underweight	17.6-18.5
	ideal		18.6-24.9
	overweight  	25-25.9
	obese		30-30.9
	morbidly obese	>=40             */

#include<stdio.h>
#include<conio.h>

void main()
{
	int h, wt;
	float bmi;
	printf("Enter the height and weight");
	scanf("%d %d", &h, &wt);
	bmi = wt / (h*h);

	if(bmi<15)
		printf("BMI category is 'Starvation'");
	else if(bmi >= 15.1 && bmi <= 17.5)
		printf("BMI catehory is 'Anorexic'");
	else if(bmi >= 17.6 && bmi <= 18.5)
		printf("BMI category is 'Underweight'");
	else if(bmi >= 18.6 && bmi <= 24.9)
		printf("BMI category is 'Ideal'");
	else if(bmi >= 25 && bmi <=25.9)
		printf("BMI category 'Overweight'");
	else if(bmi >= 30 && bmi <= 30.9)
		printf("BMI category 'Obese'");
	else if(bmi >= 40)
		printf("BMI category 'Morbidly obese'");

	getch();
	clrscr();
}
