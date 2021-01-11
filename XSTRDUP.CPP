#include<stdio.h>
#include<conio.h>
int xstrdup(char *);

void main()
{
	const char *arr = "ABC";
	char *target;
	target = xstrdup(arr);
	printf("%s", target);
	getch();
	clrscr();
}
char* xstrdup(char *s)
{
	int *p = NULL;
	p = s;
	int length = 0;
	while(*p != '\0')
	{
		length++;
		p++;
	}
	char str[length];

	int index = 0;

	while(*s != '\0')
	{
		str[index] = *s;
		s++;
		index++;
	}
	str[index] = '\0';
	return str;

}