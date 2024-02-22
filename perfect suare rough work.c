#include<stdio.h>
int main(int argc, char** argv)
{
// this is a program tha identifies perfect squares
int a=0;
int i;
int sum=0;

/*	printf("Enter a\n");
	scanf("%d",&a);*/
	while (a<50)
	{
		for(i=1; i<(a/2)+1; i++)
		{
			if(a==(i*i))
			{
				printf("\t%d",a);
				sum= sum +a;
			}
			
		}
		//sum= sum +a;
		a++;
		
	}
	printf("\nSUM::%d",sum);
	
	return 0;
}