#include<stdio.h>
#include<conio.h>
#define TOTAL 180

main()
{        int a,b,c;
	int sum;
	clrscr();

	printf("First Angle is : ");
	scanf("%d",&a);

	printf("Second Angle is : ");
	scanf("%d",&b);
	sum = a+b;

	printf("Third ANgle is : %d ",TOTAL-sum);

	getch();



}