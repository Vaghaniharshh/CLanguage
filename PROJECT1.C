#include<stdio.h>
#include<conio.h>

main()
{       float c,f;
	clrscr();

	printf("The temperature in Celsius : ",c);
	scanf("%f",&c);

	f =(1.8*c)+32;

	printf("The temperature in F : %.1f",f);
	getch();


}