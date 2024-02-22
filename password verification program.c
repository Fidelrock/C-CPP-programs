// This is a program that verifies all password requirements
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>

/*Atleast 8 characters long
*atleast 1 uppercase letter
*atleast 1 lowercase letter
*atleast 1 digit
*atleast 1 symbol*/
bool verify_password(char*p);

int main(int argc, char** argv)
{
char p[]="Ax5@abcdefg";
bool result=verify_password(p);

if(result)
{
	printf("verified password\n");
}	
else
{
	printf("Invalid password!\n");
}
	return 0;
}

bool verify_password(char*p)
{
	int i;
	int length=strlen(p);
	if(length<8) return false;
	
	bool has_upper=false;
	bool has_lower=false;
	bool has_digit=false;
	bool has_symbol=false;
	
	for( i=0; i<length; i++)
	{
		if(isupper (p[i])) has_upper= true;
		if(islower (p[i])) has_lower= true;
		if(isdigit (p[i])) has_digit= true;
		if(ispunct (p[i])) has_symbol= true;
	}
	if(!has_upper) return false;
	if(!has_lower) return false;
	if(!has_digit) return false;
	if(!has_symbol) return false;
	
	return true;
	
			
			

}

