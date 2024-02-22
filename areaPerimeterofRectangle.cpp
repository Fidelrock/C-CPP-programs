//Fidelis Odhiambo
//Eb3/56461/21

#include<iostream>
using namespace std;
int main(int argc, char** argv)
{
	/*A program that accepts Length and Width of a rectangle and outputs
	*the area and perimeter of the rectangle
	*/
	
	int length, width, perimeter;
	float area;
	
	cout <<"Enter the value of length: \n";
	
	cin>> length;
	
	cout<<"Enter the value of the width: \n";
	
	cin>> width;
	
	area = length * width;
	cout<<"The area of the rectangle is: "<< area;
	cout<<endl;
	cout<<endl;
	
	perimeter = 2*(length + width);
	
	cout<< "The perimeter of the rectangle is: "<<perimeter;
	
	
	return 0;
}