#include<stdio.h>
int main(int argc, char** argv)
{
	//Subtraction progra without using a minus sign
	
	/*Defining variables*/
	int a,b,sum;
	printf("Enter two integers to work with\n");
	scanf("%d%d",&a,&b);
	sum=a+ ~b +1;
	printf("The difference is %d\n",sum);
	
	return 0;
}