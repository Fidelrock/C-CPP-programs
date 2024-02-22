#include<stdio.h>
int main(int argc, char** argv)
{
int a;
printf("Enter a\n");
scanf("%d",&a);
while(a<=100&&a>=0)
{
	printf("\n%d",a);
	a=(a,a-5);
}
	
	return 0;
}