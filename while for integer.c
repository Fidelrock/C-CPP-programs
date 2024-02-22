
#include<stdio.h>
int main(int argc, char** argv)
{
int a,b,c,sum;
printf("Enter an interger\n");
scanf("%d ",&a);
printf("Enter an interger\n");
scanf("%d ",&b);
printf("Enter an interger\n");
scanf("%d ",&c);

while(a<10)
{
	sum=b+c;
	//a+=sum
	printf("\t%d",a);
	a++;
}

	return 0;
}