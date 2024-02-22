#include<stdio.h>
#include<string.h>
#define ENTER 13
#define TAB 9
#define BKSP 8
#define SPACE 32
int main(int argc, char** argv)
{
	char password[100];
	int i=0;
	char ch;
	
	printf("Enter password :\n");
	
	while(1)
		//At this point the program allows every click of the keyboard
	{
		ch=getch();
		if(ch==ENTER)
		{
		password[i]= '\0';
		break;	
		}
		//The program allows the user to delete so it ignores the deleted character
		else if(ch==BKSP)
		{
			if(i>0)
			{
				i--;
				printf("\b \b"); 
			}
		}
	//	here the program doesnt allow space and tab when inputing password
		 else if(ch==TAB||ch==SPACE)
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
	printf("\n\nYOUR PASSWORD IS :%s",password);
	printf("\nLENGTH IS:%d",i);
	printf("\n%d",strlen(password));
	return 0;
}