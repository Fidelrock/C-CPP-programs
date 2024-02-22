//Fidelis Odhiambo
//EB3/56461/21

#include <iostream>
using namespace std;

/*This program calculates the amount to be paid , having 
  the price, VAT and the discount of an item.
  */

int main(int argc, char** argv)
{
	int markedPrice;
	float discount, VAT, buyingPrice;
	
	cout << "Enter the price of the item: \n";
	
	cin>> markedPrice;
	
	VAT = (16 * markedPrice)/100;
	
	discount = (5 * markedPrice)/100;
	
	buyingPrice = (markedPrice - discount) + VAT;
	
	cout<<"The VAT charged: "<<VAT<<"\n";
	cout<<"The total amount paid: "<<buyingPrice<<"\n";
	
	return 0;
}