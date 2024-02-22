#include<stdio.h>
int main(int argc, char** argv)
{
	int a=100;
	while(a>=0)
	{
		if(a%5==0)
		{
			printf("\t%d",a);
		}
		a--;
	}
	return 0;
}