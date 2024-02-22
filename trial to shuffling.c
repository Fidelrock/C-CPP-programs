#include<stdio.h>
int main(int argc, char** argv)
{
	int a=1;
	int b=2;
	int c=3;
	int sum,result1,result2,result3;
	
	result1=a;
	result2=b;
	result3=c;
	printf("Result is::%d\n",result1);
	
	printf("Result is::%d\n",result2);
	
	printf("Result is::%d\n",result3);
	
	sum=result1+result2+result3;
	printf("Result of %d,%d,%d::%d",result1,result2,result3,sum);
	
	return 0;
}