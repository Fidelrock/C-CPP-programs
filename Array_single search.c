#include<stdio.h>
int main(int argc, char** argv)
{
	int a[5];
	int n,i,m=0;
	
	printf("Enter the five element to search ");
	for(i=0;i<5;i++)
	{
		scanf("%d ",&a[i]);
		
	}
	fflush(stdin);
	printf("Enter the element to search \n");
	scanf("%d",&n);
	
	for(i=0;i<5;i++)
	{
		if(a[i]==n)
		{
			m++;
		}
			else
			{
				continue;
			}
			
		
		
	}
	if(m>=1)
	{
		printf("The element found ");
	}
	else
	{
		printf("Element not found \n");
	}
	
	return 0;
}