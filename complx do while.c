#include<stdio.h>

int main(int argc, char** argv)
{
	int min;
	int max;
	int sum= 0;
	
		printf("Enter the maximum number\n");
	scanf("%d",&max);// We are accepting a max num from the user so we declare a variable int
	printf("Enter the minimum number\n");
	scanf("%d",&min);// We are accepting the min num frm the user so we declare a variable for min
	KEY:
	{
	printf("Minimum is:%d\tMaximum is:%d\n",min,max);	
	}
	//goto NEXT;
	
	
	do
	{
		if(min%5==0&&min%7==0)
		{
			printf("\t%d",min);
		}
		min++;
	}
	while (min<max);
	//goto KEY;

NEXT:
do
{
	printf("\t%d",min);
	
	sum=sum+min;
	min++;
}
while(min<max);
printf("\nsum::%d",sum);

	return 0;
}


