#include<stdio.h>

int main(int argc, char** argv)
{
int min;
int max;
int sum= 0;
int i;
char choice;
	
	printf("Enter the maximum number\n");
	scanf("%d",&max);// We are accepting a max num from the user so we declare a variable int
	printf("Enter the minimum number\n");
	scanf("%d",&min);// We are accepting the min num frm the user so we declare a variable for min
	printf("Minimum is:%d\tMaximum is:%d\n",min,max);
	MAIN_MENU:
	printf("\nPLEASE CHOOSE ONE TASK BELOW TO PERFORM\n\n");
	printf("\t\t\tA. Sum of all the numbers between max and min\n\t\t\tB. Numbers divisible by both 7&5\n\t\t\tC. Sum of p squares between\n\t\t\tD. All the values skipping 37&100\n\n");
	fflush(stdin);
	scanf("%c",&choice);// We are accepting a choice from the user so we declare a character variable
	switch (choice)
	{
	case 'A':
		do
		{
			printf("\t%d",min);
			(sum=(sum+min));// We are expecting an output sum then we declare variable sum
			min++;
		}
		while(min<=max);
		printf("\nSum ::%d",sum);
		
		
		break;
	case 'B':
		do	
	{
		if(min%5==0&&min%7==0)
		{
			printf("\t%d",min);
			
		}
			min++;
	}
	while(min<=max);
	
		break;
	
	case 'C':
		
		
		do
		{
		//	min++;
			for(i=1; i<(min/2)+1; i++)
			{
				if(min==(i*i))
				{
					printf("\t%d",min);
					(sum=(sum+min));
				}
				
			}
			min++;
					
		}
		while(min<=max);
			printf("\nSUM::%d",sum);
	
	
		break;
	case 'D':
		do
	{ 
		
		if(min==37||min==100)
		{
			printf("\t%d",++min);
		}
		printf("\t%d",min);
		min++;
	}
	while(min<=max);
		break;
	default :
		printf("\nINVALID TASK\n");
		goto MAIN_MENU;
		break;
			
	}
		
	return 0;
}