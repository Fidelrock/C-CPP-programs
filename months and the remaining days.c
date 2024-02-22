//This program finds the remaining days
#include<stdio.h>
#include<conio.h>
void  main()
{
	   /*defining variables*/
	   int a,b,r;
	  // clrscr();
	   printf("Enter the value a:\n");
	   scanf("%d",&a);
	   b=a/30;
	   printf("Month::%d\n",b);
	   r=a%30;
	   printf("Remaining day(s) is::%d\n",r);
	   getch();	
	//return 0;
}
