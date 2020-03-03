/* Given three points (x1, y1), (x2, y2), (x3, y3), write a prog. to check if all the three points fall on one straight line. */

#include<stdio.h>
#include<conio.h>

void main()
{
	int x1, y1, x2, y2, x3, y3, x4, y4, slope1, slope2;
 	printf("Enter first co-ordinate(x1,y1)");
 	scanf("\n %d %d", &x1, &y1);

  	printf("Enter 2nd co-ordinate(x2,y2)");
 	scanf("\n %d %d", &x2, &y2);

  	printf("Enter first co-ordinate(x3,y3)");
 	scanf("\n %d %d", &x3, &y3);

  	slope1=(y2-y1)/(x2-x1);
  	slope2=(y3-y2)/(x3-x2);
  	if(slope1==slope2)
  	{
  		printf("\n Three points fal on the same line");
  	}
  	else
  	{
  		printf("Three points doesn't fall on one line\n");
  	}
  	getch();
  	clrscr();
}
