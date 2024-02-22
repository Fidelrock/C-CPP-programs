#include<stdio.h>
int main(int argc, char** argv)
{
	int roll[10]={14,52,63,45,65,84,75,96,51,62};
	int r,m=0;
	int i;
	int j;
	printf("Roll number is given below \n");
	for(i=0;i<=9;i++)
	{
		printf("%d ",roll[i]);
	}
	printf("\nEnter your roll number to search\n");
	scanf("%d",&r);
	
	for(j=0;j<=9; j++)
	{
	if(r==roll[j])
	{
		printf("Rollno is found at position %d",j+1);
		m=1;
	}	
	
	}
	fflush(stdin);
	if(m==0)
	{
		printf("Not found");
	}
	return 0;
}