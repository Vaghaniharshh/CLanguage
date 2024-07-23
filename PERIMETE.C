#include<stdio.h>
#include<conio.h>
#define PI 3.14
main()
{
	int r;
	float perimeter;
	clrscr();
	printf("Enter the Radius : ");
	scanf("%d",&r);

	perimeter = 2 * PI * r;

	printf("Perimeter of Circle is %.2f", perimeter);
	getch();

}