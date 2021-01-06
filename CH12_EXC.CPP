#include<stdio.h>
#include<conio.h>
#define PI 3.1428
#define AREAT(x, y) ((x*y)/2)
#define PERIT(x, y, z) (x + y + z)
#define AREAS(x) (x*x)
#define PERIS(x) (4*x)
#define AREAC(x) (PI * x * x)
#define CIRC(x) (2 * PI * x)

void main()
{
	int a, b, s, r, i;
	float area, peri, c;
	printf("enter choice:");


	printf("\n1: area and perimeter of triangle\n");
	printf("2: area and perimeter of square\n");
	printf("3: area and circumference of a circle\n");

	printf("choice:");
	scanf("%d", &i);

	switch(i)
	{
		case 1:
			printf("enter base and height of triangle and the side");
			scanf("%d %d %d", &a, &b, &s);

			area = AREAT(a, b);
			peri = PERIT(a, b, s);

			printf("area=%f perimeter=%f", area, peri);
			break;
		case 2:
			printf("enter side of square\n");
			scanf("%d", &a);

			area = AREAS(a);
			peri = PERIS(a);
			printf("area=%f perimeter=%f", area, peri);
			break;
		case 3:
			printf("enter radius of circle\n");
			scanf("%d", &r);

			area = AREAC(r);
			c = CIRC(r);

			printf("arae=%f circumferenc%f", area, c);
			break;
		default:
			printf("wrong choice");
			break;
	}
	getch();
	clrscr();
}



