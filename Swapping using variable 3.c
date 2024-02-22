// Swapping two numbers using a third variable
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,temp;
	//clrscr();
		printf("\n Enter the value of A\n");
		scanf("%d",&a);
		printf("\nEnter the value of B\n");
		scanf("%d",&b);
		//clrscr();
		printf("\n Before swapping\n");
		printf("A::%d\nB::%d",a,b);
		
        temp=a;
		a=b;
		b=temp;
		printf("\nAfter swapping\n");
		printf("A::%d\nB::%d",a,b);
	getch();	
	//return 0;
}