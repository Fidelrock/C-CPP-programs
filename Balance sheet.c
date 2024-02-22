#include<stdio.h>
#include <stdio.h>
#include<conio.h>

int main()
{
	int num1;
	int num2;
	float price;
	float paid;
	float balance;
	printf("\n\t\t\tenter number of orages\n");
	scanf("%d", &num1);
	printf("\t\t\tenter unit price\n");
	scanf("%d", &num2);
	price=(num1)*(num2);
	printf("\n\t\t\tprice is %.2f\n",price);
	printf("\n\t\t\tenter amount paid\n");
	scanf("%f", &paid);
	balance=paid-price;
	
	printf("\t\t\tYour balance is %.2f\n",balance);

if(paid<price)
{
	printf("\n\t\t\tPLEASE ADD %.2f SHILLINGS ...",(price-paid));
}
else 
{
	printf("\n\t\t\tYOUR TRANSACTION IS DONE...\n\t\t\tWELCOME AGAIN ...");
}
	
	getch();

	

	
	return 0;
}