#include<stdio.h>
int num1,num2,num3;
int sum;
char line_text[50];// line of input from keyboard

int main(int argc, char** argv)
{
	printf("Input three numbers separated by commas: ");
	//scanf("%d%d%d",&num1,&num2,&num3);
	fgets(line_text,sizeof(line_text),stdin);
	sscanf(line_text,"%d,%d,%d",&num1,&num2,&num3);
	sum=num1 +num2 +num3;
	printf("The sum of the three numbers is: %d",sum);
	return 0;
}