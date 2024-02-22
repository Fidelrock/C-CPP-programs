#include<stdio.h>
int main(int argc, char** argv)
{
	int a=0;
	while (a<100)
	{ 
		
		if(a==37||a==99)
		{
			printf("\t%d",++a);
			//printf("\n%d",a);
		}
		printf("\n%d",a);
		a++;
		//printf("\n%d",a);
	}
	//printf("\n%d",a);
	return 0;
}