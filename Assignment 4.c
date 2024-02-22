//This is a sample of a quiz program
#include<stdio.h>
#include<stdio.h>
//The start of the main function
int main(int argc, char** argv)
{
  char name,name1;
  char name2,name3;
  char name4;
  
	
	printf("\n\t\tWELCOME\n\n");
		printf("'1'.SPORTS\n'2'.UNIVERSITIES\n'3'.BANKING SERVICES\n'4'.COUNTIES\n\n");
	printf("The above are topics of interest you are to choose between 1-4\n");
	scanf("%c",name);
	//The main decision making
	switch(name)
	{
		case '1':
		{
			//Declaring new variable
			
			printf("\t\tWELCOME TO SPORTS\n\n");
			printf("\t1.SOCCER\t2.RUGBY\n\t3.NETBALL\t4.HOCKEY\n");
		
			printf("\n\tWhich sport do you prefer?\n");
				fflush(stdin);
				scanf("%c",&name1);
				
				//If condition in case 1
				if(name1=='1')
				{
					printf("\nWELCOME TO SOCCER\n");
					
				}
				else if(name1=='2')
				{
					printf("WELCOME TO RUGBY\n");
				}
				else if(name1=='3')
				{
					printf("WELCOME TO NETBALL\n");
				}
				else if(name1=='4')
				{
					printf("WELCOME TO HOCKEY\n");
				}
				else
				{
					printf("INVALID INPUT\n");
				}
				

								
			
			break;
		}
	

		 //Case 2 of the main decision
		
		case '2':
		{
			
		printf("\nWELCOME TO UNIVERSITY SCHOOLS\n\n");
		printf("\nWhich University below do you prefer\n\n");
		printf("1.CHUKA UNIVERSITY\n2.KIRINYAGA UNIVERSITY\n3.TECHNICAL UNIVERSITY OF KENYA\n4.DEDAN KIMATHI UNIVERSITY\n");
		fflush(stdin);	
		scanf("%c",&name2);
		//The following is an if...else...if condition on the users choice pertaining universities above
		
		if(name2=='1')
		{
			printf("WELCOME TO CHUKA UNIVERSITY\n");
		}
		 else if(name2=='2')
		{
			printf("WELCOME TO KIRINYAGA UNIVERSITY\n");
		}
		 else if(name2=='3')
		{
			printf("WELCOME TO TECHNICAL UNIVERSITY OF KENYA\n");
		}
		 else if(name2=='4')
		{
			printf("WELCOME TO DEDAN KIMATHI UNIVERSITY\n");
		}
		else
		{
			printf("INVALID INPUT\n");
		}
		
		break;
		
		}
		//Case three of switch
		case '3':
		{
			
			
			printf("\t\tWELCOME TO BANKING SERVICES\n\n");
			printf("Which of the following banks do you prefer the most?\n");
			printf("1.KCB Bank\t\t2.Family Bank\n3.Post Bank\t\t4.Equity Bank\n");
			fflush(stdin);
			scanf("%c",&name3);
			
			// If conditions start here
				if(name3=='1')
		{
			printf("THANK YOU FOR CHOOSING KCB BANKING\n");
		}
		 else if(name3=='2')
		{
			printf("THANK YOU FOR CHOOSING FAMILY BANKING\n");
		}
		 else if(name3=='3')
		{
			printf("THANK YOU FOR CHOOSING POST BANKING\n");
		}
		 else if(name3=='4')
		{
			printf("THANK YOU FOR CHOOSING EQUITY BANKING\n");
		}
		else
		{
			printf("INVALID INPUT\n");
		}
		
		break;
			
		}
		case'4':
		{
			
			printf("\t\tTHE FOLLOWING ARE COUNTIES IN KENYA\n\n");
			printf("1.NAIROBI\t\t2.MOMBASA\n3.KISUMU\t\t4.EMBU\n");
			printf("Which is the capital city of Kenya\n");
			fflush(stdin);
			scanf("%c",&name4);
			// If ...else..if condition starts here
			
				if(name4=='1')
		{
			printf("CORRECT CHOICE\n");
		}
		 else if(name4=='2')
		{
			printf("WRONG CHOICE\n");
		}
		 else if(name4=='3')
		{
			printf("WRONG CHOICE\n");
		}
		 else if(name4=='4')
		{
			printf("WRONG CHOICE\n");
		}
		else
		{
			printf("INVALID INPUT\n");
		}
		
		break;
			
		}
		default:
		{
			printf("INVALID INPUT");
		}
		
		
	}
	

	
	return 0;
}
 