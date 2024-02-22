#include<stdio.h>
#include<math.h>
//#define PI = 3.14159
// Defining trigonometric ratios

int main(int argc, char** argv)
{
	//Declaring variables
	
	float degree,radian;
	const float PI=3.142;
	printf("Enter angle in degrees\n");
	scanf("%f" , &degree);
	
	  radian= degree * (PI / 180.0);
	printf("cotan=%f",1/tan (radian));
	
	
	return 0;
}