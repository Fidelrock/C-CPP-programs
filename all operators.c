//3 arithmetic,2 relational,3 assignment operators
#include<stdio.h>
// using static storage class
static int a= 10;
static int b= 5;

int main(int argc, char** argv)
{
int num1,num2;

printf("Enter two integers to work with\n");
scanf("%d%d",&num1,&num2);

printf("sum=%d\n",num1+num2);
printf("Division is %.2f\n",(float)num1/num2);
printf("Difference is %d\n",num1-num2);
if(num1>num2)
{
	printf("num1 is greater\n");
}
else
{
	printf("num1 is less than num2\n");
}
if(num2>num1)
{
	printf("num2 is greater\n");
}
else
{
	printf("num2 is less than num1");
}
a=+5;
printf("%d\n",a);

// b=*5;

//printf("%d",b);

num1=+5; 

printf("%d",num1);

	return 0;
}