#include<stdio.h>
int divNum();
	
int main(int argc, char** argv)
{

	int div;
	div= divNum();
	
	return 0;
}

int divNum()
{
	int num1;
	int num2;
	int div;
	scanf("%d %d",&num1,&num2);
	
	div= num1/num2;
	printf("%d",div);
	
	return div;
}