#include<stdio.h>
int main(int argc, char** argv)
{
int i,a;
char name[20];
printf("\n\t\t\t-: QUIZ  ;-");
printf("-press 1. START THE QUIZ\t\t\t\n \t\t\t\t\tpress 0. QUIT THE QUIZ\n ");
fflush(stdin);
scanf("%d",&i); // here we are accepting a value 1 or 0 from the user...
switch(i)
{
	case 1:
		printf("\n\t\t\t ENTER YOUR NAME\n");
		scanf("%s",&name);  // We are accepting the name of the user...so we can declare the character variable
			printf("\n\t\t\t PLAYER NAME IS: \t%s",name);
				printf("\n\t\t\t {SELECT AN OPTION AND ENTER AN ANSWER NO. }\n\n");
					printf("\n\t\t\t Q1. WHAT IS THE CAPITAL OF INDIA ?\n");
						printf("\n\t\t\t 1.  DELHI\n\t\t\t 2.  MUMBAI\n");
						scanf("%d",&a);
						if(a==1)
						{
								printf("\n\t\t\t CORRECT !!!!");
						}
						else if(a==2)
						{
								printf("\n\t\t\t WRONG !!!!");
						}
						else
						{
								printf("\n\t\t\t INVALID INPUT");
						}
			
		break;
	case 0:
		printf("\n\t\t EXITED ....");
		break;
	default:
			printf("\n\t\t INVALID INPUT !!!"); // THIS IS THE MESG WHEN THE USER INPUTS OTHER THAN 1 OR 0
			break;
}	
	return 0;
}
// Now run the program
