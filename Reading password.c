#include<stdio.h>

#define ENTER 13
#define BKSP 8
#define TAB 9
#define SPACE 32
int main(int argc, char** argv)
{
	//We declare the variables required
	
	char password[100];
	int i=0;
	char ch;
	
	//Accepting the users password
	printf("ENTER YOUR PASSWORD:");
	
	while(1)
	{
		ch=getch();//We use the ASCII values of the characters
		if(ch==ENTER)
		{
			password[i]='\0';
			break;
		}
		else if(ch==BKSP)
		{
			if(i>0)
			{
			i--;
			printf("\b \b");
			}
				
		}
		else if(ch==SPACE||ch==TAB)
		{
			continue;
		}
		else
		{
			password[i]=ch;
			i++;
			printf("*");
		}
		
	}
	printf("\n\nYOUR PASSWORD IS:%s",password);
	printf("\nLENGTH IS :%d",i);
	
	
	return 0;
}