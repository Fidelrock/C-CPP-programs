#include<stdio.h>

int main(int argc, char** argv)
{
	int num1,num2,num3,sum;
	printf("Enter three numbers separated by commas:: \n");
	scanf("%d,%d,%d",&num1,&num2,&num3);
	
	sum=num1+num2+num3;
	
	printf("Sum::%d",sum);
	return 0;
}