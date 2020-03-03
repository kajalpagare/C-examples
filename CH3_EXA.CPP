/* If cost price and selling price of an item are input thr' the KB, write a prog. to determine whether the seller made profit or incurred loss. Also determine how much profit he made or loss he incurred. */

#include<stdio.h>
#include<conio.h>

void main()
{
	int cp, sp, pro, loss;

	printf("Enter sp and cp");
	scanf("%d %d", &cp, &sp);
	if(cp>sp)
	{
		loss = cp - sp;
		printf("loss is %d", loss);
	}
	else
	{
		pro = sp - cp;
		printf("pro is %d", pro);
	}
	getch();
	clrscr();
}