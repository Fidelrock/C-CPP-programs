#include<stdio.h>
int main(int argc, char** argv)
{
	int a[5];
	int n,i,m=0;
	
	printf("Enter the five element to search \n");
	for(i=0;i<5;i++)
	{
		scanf("%d ",&a[i]);
		
	}
	fflush(stdin);
	printf("Enter the element to search \n");
	scanf("%d",&n);
	
	for(i=0; i<5; i++)
	{
		if(a[i]==n)
		{
			printf("The number is found at position %d\n",i+1);
			m=1;
		}
		
	}
	if(m==0)
	{
		printf("The element not found ");
	}
	
	return 0;
}