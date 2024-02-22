#include<stdio.h>
#include<conio.h>
int main(int argc, char** argv)
{
	char letter;
	char name [20];
	int a;
	int b;
	int c;
	int d;
	
printf("\n\t\t\tENTER YOUR NAME\n");	
scanf("%s",&name);// We are accepting the name of the interviewee
printf("\n\t******WELCOME %s PLEASE ATTEMPT THE FOLLOWING QUESTIONS",name);
printf("\n***********************\tWELCOME TO C PROGRAMMING\t***********************\n");
printf("\nBELOW ARE TOPICS TO DISCUSS...CHOOSE ONE\n");
printf("\t\t\t1. SPORTS\n\t\t\t2. UNIVERSITIES\n\t\t\t3. BANKING SERVICES\n\t\t\t4. COUNTIES\n\n");
scanf("%d",&a); //We are accepting a choice 1-4 from the user so we add a variable integer

switch(a)
{
	case 1:
	{
	printf("\n************************\tWELCOME TO SPORTS\t*************************\n");
	printf("\nPlease choose the game that you love the most\n");
	printf("\n\t\t\tA. SOCCER\n\t\t\tB. RUGBY\n\t\t\tC. NETBALL\n\t\t\tD. HOCKEY\n");
	fflush(stdin);
	scanf("%c",&letter); // We are accepting an answer inform of a letter so we should declare a variable character
	if(letter=='A')
	{
		printf("\n\t\t\tWELCOME THIS IS SOCCER\n");
	}
	else if(letter=='B')
	{
		printf("\n\t\t\tWELCOME THIS IS RUGBY\n");
	}
	else if(letter=='C')
	{
		printf("\n\t\t\tWELCOME THIS IS NETBALL\n");
	}
	else if(letter=='D')
	{
		printf("\n\t\t\t WELCOME THIS IS HOCKEY\n");
	}
	else
	{
		printf("\n\t\t\tINVALID CHOICE\n");
	}
	
		break;
	}
	case 2:
	{
		printf("\n*********************\tWELCOME TO UNIVERSITY OF YOUR CHOICE\t****************\n\n");
		printf("Below are some of the Universities. Chose one to be interviewed on\n\n");
		printf("\t\t\t1. CHUKA UNIVERSITY\n\t\t\t2. TECHNICAL UNIVERSITY OF KENYA\n\t\t\t3. DEDAN KIMATHI UNIVERSITY\n\t\t\t4. KIRINYAGA UNIVERSITY\n\n");
		fflush(stdin);  //This function enables smooth runing of the if...else...if...decisions
		scanf("%d",&b); // We are accepting a choice from the user so we declare a variable integer
		
		if(b==1)
		{
			printf("\n\t\t\tWELCOME TO CHUKA UNIVERSITY\n\t\t\tTHIS IS A PROPHETIC UNIVERSITY\n");
		}
		else if(b==2)
		{
			printf("\n\t\t\tWELCOME TO THE TECHNICAL UNIVERSITY OF KENYA...#TUK\n");
		}
		else if(b==3)
		{
			printf("\n\t\t\tWELCOME TO DEDAN KIMATHI UNIVERSITY");
		}
		else if(b==4)
		{
			printf("\n\t\t\tWELCOME TO KIRINYAGA UNIVERSITY");
		}
		else
		{
			printf("\n\t\t\tINVALID INPUT");
		}
		break;
	}
	case 3:
	{	
		printf("\n*********************\tWELCOME TO BANKING SERVICES\t**************************\n");
		printf("\n\t\t\tBelow are names of banks...Which bank is the most common ?");
		printf("\n\t\t\t1.KCB BANK\n\t\t\t2. FAMILY BANK\n\t\t\t3. COOPERATIVE BANK\n\t\t\t4. EQUITY BANK\n");
		scanf("%d",&c); // We are accepting a bank answer from the user so we declare a variable integer
		
		switch (c)
		{
			case 1:
				printf("\n\t\t\t CORRECT!!!");
				break;
			case 2:
				printf("\n\t\t\tWRONG!!!");
				break;
			case 3:
					printf("\n\t\t\tWRONG!!!");
				break;
			case 4:
					printf("\n\t\t\tWRONG!!!");
				break;
			default:
				printf("\n\t\t\tINVALID INPUT");
				break;
		}
		break;
	} 
	case 4:
	{	
		printf("\n**********************\tWELCOME TO COUNTIES IN KENYA\t*************************\n");
			printf("\n\t\t\tWhich is the capital city of kenya");
				printf("\n\t\t\t1. MOMBASA\n\t\t\t2. NAIROBI\n\t\t\t3. EMBU\n\t\t\t4. KISUMU\n");
				fflush(stdin);
				scanf("%d",&d); // We are accepting an answer from the user so we declare a variable integer
				if(d==1)
				{
						printf("\n\t\t\tinitializing...");
							printf("\n\t\t\tCODE 001 !!!");
							printf("\n\t\t\tWRONG ANSWER!!!");
				}
				else if(d==2)
				{
						printf("\n\t\t\tinitializing...");
							printf("\n\t\t\tCODE 047 !!!");
							printf("\n\t\t\tCORRECT ANSWER!!!");	
				}
				else if(d==3)
				{
						printf("\n\t\t\tinitializing...");
							printf("\n\t\t\tCODE 014 !!!");
							printf("\n\t\t\tWRONG ANSWER!!!");
				}
				else if(d==4)
				{
						printf("\n\t\t\tinitializing...");
							printf("\n\t\t\tCODE 041 !!!");
							printf("\n\t\t\tWRONG ANSWER!!!");

				}
				
		break;
    }	
	default:
	{
			printf("\nINVALID INPUT");
		break;
	}
}
printf("\n\t\t*******************%s YOUR INTERVIEW IS SUCCESSFUL...***************\n\t\t\t***********THANKS FOR YOUR COOPERATION********************",name);
	getch();
	return 0;
}