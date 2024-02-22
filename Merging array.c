//This is a program that merges two different singler dimensional arrays
#include<stdio.h>
int main()
{
	int a[50],b[50], c[100];
	int n,i;
	printf("Enter the number of items to be stored in your array \n");
	scanf("%d",&n);
	printf("Enter your first array \n");
	for(i=0; i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter your second array \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("Below is the third array after merging \n");
	for(i=0;i<n*2;i++)
	{
		if(i<n)//This means that the lower  part before n is taken by the first array
		{
			c[i]= a[i];
		}
		else /*That is if i is greater than n, therefore the second part is taken by the second array.
			*Therby merging the both arrays to one*/
		{
			c[i]=b[i-n];
		}
		printf("%d ",c[i]);
	}
	return 0;
}