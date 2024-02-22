#include<stdio.h> 
#include<string.h> 
int main()
{
	int regno;
	int a,b;
	int no=1-4;
	int p=68089;
	//student registration no
	printf("Enter your registration number\n");
	scanf("%d",&regno);
	//your password only
	printf("Please enter your password\n");
	scanf("%d",&p);
	if(regno==345634721)
	{
		printf("Correct registation");
	}
	else if(p==68089)
	{
		//welcoming details
    printf("\t\t\tCorrect password and login successful \n \n");
	printf( "============================================================================ \n");
	printf("\t\t\t*****************WELCOME VICTOR ********** \n \n \n");
	printf("\t\t\t*****************CHUKA UNIVERSITY*********** \n\n \n");
	printf( "============================================================================ \n");
	//students details
	printf("Your name is : VICTOR MACHARIA \n \n \n");
	printf("Your faculty is : SCIENCE ENGINEERING AND TECHNOLOGY \n \n \n");
	printf("You are pertaking : APPLIED COMPUTER SCIENCE \n \n \n");
	printf("Enter number of your choice must be 1-4 \n \n");
	printf("\t\t\t 1 for EXAM EVALUATION \n");
	printf("\t\t\t 2 for STUDENT REMINDER \n");
	//kinda student reminder
	printf(" \t\t\t3 for FINANCIAL DETAILS \n");
	//you either checking your balance or paying ua fees
	printf("\t\t\t 4 for STUDENTS DASHBOARD \n");
	scanf("%d",&no);
	switch(no)
	{
		case 1:
			//its the student exam results
			printf("\t\t\tEXAM EVALUATION\n\n");
			if(no==1)
			{
				printf(  "\t\t\t PHY-B \n");
				printf(  "\t\t\t ASCS-A \n" );
				printf(  " \t\t\tCOSC-A \n");
				printf(  "\t\t\t MATHS-A \n");
				printf(  "\t\t\t ECON-B \n");		
				break;
			}		
	   case 2:
	   	//its your moto as a student
	   	    printf("\t\t\tSTUDENT REMINDER \n \n");
	   	    if(no==2)
			   {
			   	printf("\t\t\tAlways remember you left home to change home\n");
			   	break;
			   }	   
		case 3:
			printf("\t\t\tFINANCIAL DETAILS \n \n");
			if(no==3)
			{
			printf("\t\t\tFees payment  and fees balance \n \n");
			}
			printf("\t\tEnter number of your choice 1-2 \n");
			printf( "\t\t\t 1 for FEES PAYMENT \n");
			printf(" \t\t\t2 for CHECK FEES BALANCE \n");
			scanf("%d%d",&a,&b);
			if(a==1)
				//you are about to pay the student fees
			{   
				printf("\t\tYou can pay using the following banks \n \n \n");
				printf(  "\t\t\t BACLAYS BANK-4524654 \n");
				printf(  " \t\t\tEQUITY BANK-6463264 \n");
				printf(  "\t\t\t CO-OPERATIVE BANK-563576 \n");
				printf(  "\t\t\t FAMILY BANK-463473 \n \n");
				printf(  "\t\t\t######  NO CASH WILL BE ACCEPTED  #####\n \n");
			}
			else if(b==2)
				//you are about to check your fees balance
			{
				printf("\t\t\tYour fee balance is 2000 \n");
			}
			else
			{
				printf("\t\t\tINVALID NUMBER PLEASE PUT NUMBER 1 OR 2 \n \n");
				//when the number entered is not either 1 or 2
			}
			break;
		case 4:
			printf("\t\t\tSTUDENT DASHBOARD \n \n");
			if(no==4)
			 {
				printf(    " ################# WELCOME FEEL PART OF CHUKA FRATERNITY ############## \n \n"   );
				printf(    " \t\t\tNAME :Victor \n  "   );
				printf(    "\t\t\t COURSE :Applied computer science \n   "   );
				printf(    " \t\t\tFACULTY :Engineering and technology \n  "    );
				printf(    "\t\t\t UNIVERSITY :Chuka university  \n "   );
				break;
			}
		default:
		{
			printf("\t\t\tINVALID INPUT PLEASE PUT NUMBER 1-4 \n \n");
			//when the number is not among 1 to 4
		}
	}
	}
	
	else
	{
		printf("LOGIN UNSUCCESSFULL PLEASE CHECK YOUR DETAILS AND TRY AGAIN");
		//when the password and registration is incorrect
	}
	return 0;			
}