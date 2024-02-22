//This program takes a number as an input and give the number to 2 dp as the 
//output

#include <iostream>
#include <iomanip>//For set precission

float roundToTwoDecimalPlaces(float number){
	
	 return roundf(number * 100) / 100;
	
}

int main(int argc, char** argv)
{
	float inputNumber;
	std::cout<<"Enter a number";
	std::cin>> inputNumber;
	
	float roundedNumber = roundToTwoDecimalPlaces(inputNumber);
	
	std::cout<<"Number rounded to 2 decimal places : "<<std::fixed<<std::setprecision(2)<<roundedNumber<<std::endl;
	return 0;
}