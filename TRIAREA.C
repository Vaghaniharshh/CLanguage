#include<stdio.h>
#include<conio.h>

main()
{
	int base,height;
	float area;
	clrscr();

	printf("Enter the base : ");
	scanf("%d",&base);

	printf("Enter the height : ");
	scanf("%d",&height);

	area = 0.5 * base * height;

	printf("Area of Triangle is %.2f", area);

	getch();


}