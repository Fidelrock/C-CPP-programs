//Use of comma operator
#include<stdio.h>
int main(int argc, char** argv)
{
int a,b;
printf("\n Welcome to the use of comma operator\n");

printf("\n Enter the value of A\n");
scanf("%d",&a);
b=(a,a+5);
printf("\n\nThe solution after comma operator is\n %d\n",b);
	
	return 0;
}