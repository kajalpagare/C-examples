#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define AM(x,y) ((x+y)/2)
#define ABS(x,y) (x<y)
#define LOWER(x) (122- (90-x))
#define BIG(x,y) (x>y)

void main()
{
	char ch, ch1;
	int choice, a, b, abs, c=0;
	float am;

	clrscr();
	printf("\tMAcro definitions to:\n");

	printf("\n1: Find arithmatic mean of two numbers:\n\n");
	printf("2: find absolute value of a number:\n\n");
	printf("3: convert an uppercase character to lowercase:\n\n");
	printf("4: obtain the bigger of two numbers\n\n");

	printf("enter your choice:");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1:
			printf("\nenter two numbers:\n");
			scanf("%d %d", &a, &b);
			am = AM(a, b);
			printf("\narithmatic mean= %f", am);
			break;
		case 2:
			printf("enter a number:");
			scanf("%d", &a);

			if ABS(a,c)
				abs = a*(-1);
			else
				abs = a;
			printf("\nabsolute value= %d", abs);
			break;
		case 3:
			printf("\nenter an uppercase character:");
			scanf("%c", &ch);
			ch1 = LOWER(ch);
			printf("\nequivalent lowercase character= %c", ch1);
			break;
		case 4:
			printf("\nenter two numbers:\n");
			scanf("%d %d", &a, &b);

			if (BIG(a,b))
				printf("\n\n%d is bigger.\n");
			else
				printf("\n\n%d is bigger.\n");
				break;
		default:
			exit(0);
	}
	getch();
}
