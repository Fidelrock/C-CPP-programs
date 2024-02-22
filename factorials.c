// factorial program
#include<stdio.h>
void factorial(int no, int f)
{
	if(no>=1)
	{
		f=f*no;
		no--;
		factorial(no,f);
	}
	else
	{
		printf("Factorial =%d",f);
	}
}
int main(int argc, char** argv)
{
	int no;
	printf("Enter any number to find its factorial\n");
	scanf("%d",&no);
	factorial(no,1);
	return 0;
}