#include<stdio.h>
#include<math.h>
#include<conio.h>
// An operation using 4 numbers
int main(int argc, char** argv)
{
	// Declaring variables
char op;
int num1,num2,num3,num4;
int result;
// Initializing the inputs and outputs

printf("Enter first number:\n");
scanf("%d",&num1);
printf("Enter the second number:\n");
scanf("%d",&num2);
printf("Enter the third number:\n");
scanf("%d",&num3);
printf("Enter the fourth number:\n");
scanf("%d",&num4);
printf("\t\t\t1: Sum of all the numbers\n");
printf("\t\t\t2: Sum of the squares of all numbers\n");
printf("\t\t\t3: Squareroot of the 1st and the 2nd number\n");
printf("\t\t\t4: Sine of the 1st and 2nd numbers\n");
printf("\t\t\t5:Cuberoot of the sum of the first and the second numbers\n");
printf("\t\t\t6: The sum of the cotan of the first three numbers\n\n ");
//Defining the character
printf("Enter the operator(1-6) to work with:\n");
fflush(stdin);
scanf("%c",&op);
/* using (if else if )decision making
*The main part of the program*/
//Condition 1
if(op=='1')
{
	result=num1+num2+num3+num4;
	printf("Sum is::%d\n",result);
}
//Condition 2
else if(op=='2')
{
	result=(num1*num1)+(num2*num2)+(num3*num3)+(num4*num4);
	printf("Result::%d",result);
}
//Condition 3
else if(op=='3')
{
	result=sqrt(num1);
	printf("Result::%d\n",result);
	result=sqrt(num2);
	printf("Result::%d\n",result);
}
//Condition 4
else if(op=='4')
{
	const float PI=3.142;
	// Declaring new variables, degree and radian
	float degree,radian;
	
	degree = num1;
	
	radian = degree*(PI / 180.0);
	printf("Sin%.4f::%.4f\n",degree,sin(radian));
	
		degree = num2;
	
	radian = degree*(PI / 180.0);
	printf("Sin%.4f::%.4f\n",degree,sin(radian));

}
//Condition 5
else if(op=='5')
{
	 float result=cbrt(num1+num2);
	 printf("Result::%.4f\n",result);
}
//Condition 6
else if(op=='6')
{
	const float PI=3.142;
	//Declaring new variables
	float degree1,degree2,degree3,radian1,radian2,radian3;
	degree1= num1;
	degree2=num2;
	degree3=num3;
	radian1= degree1*(PI /180.0);
    radian2= degree2*(PI /180.0);
	radian3= degree3*(PI /180.0);
	printf("Sum of first three cotans are::%.4f\n",(1/tan(radian1))+(1/tan(radian2))+(1/tan(radian3)));
}
else
{
	printf("INVALID INPUT\n");
}
getch();


 	
	return 0;
}
