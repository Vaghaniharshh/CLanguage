#include<stdio.h>
#include<conio.h>

main()
{       int a,b,c,d,e,hraa,daa,taa;
	clrscr();
	printf("Base salary : ");
	scanf("%d",&a);

	printf("HRA : ");
	scanf("%d",&b);

	printf("DA : ");
	scanf("%d",&c);

	printf("TA : ");
	scanf("%d",&d);

	hraa = a * b / 100;
	daa = a * c / 100;
	taa = a * d /100;

	e = a+hraa+daa+taa;

	printf("Gross salary : %d",e);



	getch();



}