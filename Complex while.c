#include<stdio.h>
	int  max;
	int  min;
int main(int argc, char** argv)
{

	int sum;
	
	printf("Enter the maximum number\n");
	scanf("%d",&max);// We are accepting a max num from the user so we declare a variable int
	printf("Enter the minimum number\n");
	scanf("%d",&min);// We are accepting the min num frm the user so we declare a variable for min
	printf("Minimum is:%d\tMaximum is:%d\n",min,max);
	sum= max+min;//We are expecting an outcome sum so we declare the variable
	printf("Sum::%d\n",sum);
	
		while(min<=max)
	{
		if(min%5==0&&min%7==0)
		{
			printf("\t%d",min);
			
		}
			min++;
	}
	
	
	
	return 0;
}
 