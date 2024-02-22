#include<stdio.h>
int main(int argc, char** argv)
{
	int a=0;
	do
	{
		if(a%5==0&&a%7==0)
		{
			printf("\t%d",a);
		}
		a++;
		
	}
	while(a<500);
	return 0;
}