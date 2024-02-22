#include<stdio.h>
int main(int argc, char** argv)
{
//A program to detect even and odd numbers using divide, multiply
int n;

printf("\n\t\t\tEnter an integer :\n ");
scanf("%d",&n);

if ((n/2)*2==n)// This means that the quotient of n multiplied by two is n
	printf("\t\t\tThe number is even\n");
else 
	printf("\t\t\tThe number is Odd\n");
	
	return 0;
}
