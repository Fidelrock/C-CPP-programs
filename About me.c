#include<stdio.h>
#include<conio.h>
#define a 100
 int main()
{
//Every detail about myself
// outputs
	printf("-----------------\n");
	printf("I am a continuing student in the art of programming\n");
	printf("I am looking forward to becoming the best computer science employee\n");
	printf("I need everyones assistant\n");
	// defining variables
	int shoes,rent,clothes;
	// initializing the variables
	printf("How many pairs of shoes do you have:\n");
	scanf("%d",&shoes);
	printf("I have %d pairs\n",shoes);
	printf("How much do you pay for rent per sem:\n");
	scanf("%d",&rent);
	printf("I pay %d for my rent at school\n",rent);
	printf(" How many pairs of clothes do you have:\n");
	scanf("%d",&clothes);
	printf(" I have %d pairs of clothes\n",clothes);
	printf("----------------------\n");
	//initializing variables
		char name[]={'F','I','D','E','L','I','S','O','D','H','I','A','M','B','O','\0'};
	char Name[] ="FIDELIS_ODHIAMBO";
	const int b= 54;
	/*Initializing variables*/
	printf("My name is:%s\n",name);
	printf(" My name is::%s\n",Name);
	printf("--------------------\n");
	// No argument function
	printf("The sum:%d\n",a+b);
	printf("Multiplication is:%d\n",a*b);
	printf("Division is:%.4f\n",(float)a/b);// type matching
	printf("Sub is %d\n",a-b);
	printf("Remainder is::%d\n",a%b);
	getch();
	return 0;


	
	
	
}