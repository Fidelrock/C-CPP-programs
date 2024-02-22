#include<stdio.h>
int main(int argc, char** argv)
{
	int a[5];
	int b[5];
	int n;
	int i;
	int j;
	printf("Enter the amount of numbers to store \n");
	scanf("%d",&n);
	printf("Enter the %d numbers one by one \n",n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);	
	}
	printf("The array before copying\n");
	for(j=0;j<n;j++)
	{
			printf("%d ",a[j]);
			b[j]=a[j];
	}
	printf("\nAfter copying second array is given below \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
	

	return 0;
}