#include<stdio.h>

int main()
{
	int a,b;
	int sum;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);//We era expecting two numbers from the user so we declare the variables
	sum=a+b;
	printf("The sum is %d",sum);
	return 0;
}