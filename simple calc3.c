//A simple calculator using (switch) decision making
#include<stdio.h>
// main function
int main(int argc, char** argv)
{
// Declaring variables
char sign;
float a,b,result;
printf("Enter two numbers::\n");
scanf("%f%f",&a,&b);
printf("Enter a sign function\n");
fflush(stdin);
scanf("%c",&sign);
// switch condition
	switch(sign)
	{
		// first case
		case '+':
		{
			result=a+b;
			printf("Result::%.2f\n",result);
			break;
		}
		//second case
		case '-' :
		{
			result= a-b;
			printf("Result::%.2f\n",result);
			break;
		}
		//third case
		case '*' :
		{
			result=a*b;
			printf("Result::%.2f\n",result);
			break;
		}
		//forth case
		case '/' :
		{
			result=a/b;
			printf("Result::%.2f\n",result);
			break;
		}
		//default case
		default:
		{
			printf("Invalid sign\n");
		}
		
	}
	return 0;
}