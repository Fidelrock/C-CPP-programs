
#include<stdio.h>
#include<string.h>
//#include<graphics.h>
#include<conio.h>
#include<windows.h>
#include<stdbool.h>
void female_empty_rooms();
void male_empty_rooms();
void Mbookroom();
void Fbookroom();
  char Fhostel[8][15];
    char Mhostel[10][10];
    char booked='X';
    int room;
    int flour;
int main()
{
	system("color 2");
	double Amount;
    int opt,year,reg;
    char name[50];
    int i,n,Num1,j,r;
    r=2;
    welcome:
    printf("\n\n\n");
    printf("===========CHUKA UNIVERSITY=============");
    printf("\nThe prophetic university of choice");
    printf("\nplease select the following options");
    printf("\n\n1.Student details");
    printf("\n2.Chuka university fee structure");
    printf("\n3.Fee payment method");
    printf("\n4.Student accomodation");
    printf("\n5.Exit");
    printf("\n\nPlease select one of your choice:");
    scanf("%d",&opt);
    
    switch(opt){
    	case 1:
    		start:
    		printf("\nplease enter your name:");
    		scanf("%s",&name);
    		printf("Enter your Reg Num:");
    		scanf("%d",&reg);
    		
    		if(reg<53000)
			{
    		printf("Such Reg Num doest not exist");
			goto start;
			}
    		else if(reg>60000){
    		printf("your are not a university student");}
    		else{
    		printf("welcome to your student portal");}
    		printf("\nEnter the course your doing:");
    		scanf("%s",&name);
    		printf("\nWhich year did you join the University:");
    		scanf("%d",&year);
    		if(year>2021&&year<2018)
			{
    		printf("The reg you gave is not yours");
    		exit(0);
			}
    		else{
    		printf("\nyou've login successfully you can now go back to option 2.......");}
			//system("cls");
			goto welcome;
			case 2:
				printf("\n  **************Chuka Uni fee structure***************" );
			    printf("\n | Sem                                    Amount ksh: | ");
			    printf("\n | 1.                                      26000.00   | ");
				printf("\n |                                                    | ");
				printf("\n | 2.                                      8000.00    | ");
			    printf("\n | Total                                   34000.00   | ");
				printf("\n  ************************welcome********************* "); 
				 
				printf("\nPrint fee structure now?");
				//system("cls");
				goto welcome;  
				system("cls");       
			
			case 3:
			       printf("Do you preffer paying your fee using cash trasaction or through cheque?");
				   printf("\n1.Cash Transaction:");
				   printf("\n2.Cheque:");
				   printf("\nPlease select one of your choice:");
                   scanf("%d",&opt);
				   if(opt==j){
				   printf("you want to pay cash using which bank");
				   printf("\n1.KCB bank. ");
				   printf("\n2.Family bank. ");
			       printf("\n3.Faulu bank. ");
	     	       printf("\n4.Corporative bank. ");
			       printf("\n5.Equaty bank. ");
			       printf("\nPlease select bank of your choice");
			       scanf("%d",&opt);
			       switch(opt)
				   {
			       case 1:
				   printf("********Welcome to KCB bank**********");
				   printf("\nPlease Enter your bank account number:");
				   int account;
				   scanf("%d",&account);
				   printf("Enter your Reg Num:");
    	           scanf("%d",&reg);
				   printf("Enter Amount you want to pay:");
				   scanf("%lf",&Amount);
				   printf("please Enter your phone number");
    		       scanf("%d",&Num1);
				   printf("\nyour payment is being work upon: ");
				   printf("\n ---------------------KCB BANK----------------------------- ");
				   printf("\n*                             Bank you can trust            * ");
				   printf("\n*                           ________________                * ");
				   printf("\n*                          | FORM NO.A 123B |               * ");
				   printf("\n*                           ----------------                * ");
				   printf("\n*                   Transaction receipt                     * ");
				   printf("\n*        BRANCH:CHUKA BRANCH                                * ");
				   printf("\n*  Date 08-10-2022  03:10:34                                * ");
				   printf("\n*  Account No:%d                                          * ",account);
				   printf("\n*  Account Name:Chuka university                            * "); 
				   printf("\n*  Cash Amount:Ksh%.2lf                                  * ",Amount);
				   printf("\n*  Reg num: %d                                             * ",reg);
				   printf("\n*  Customer signature:*****                                 * ");
				   printf("\n*  Mobile number:%d                                          * ",Num1);
				   printf("\n* _________________________________________________________ * ");
				   printf("\nwelcome again our happy customer: ");
				   printf("\nRate or sevrices by giving us five stars:");
				   scanf("%d",&Num1);
				    
				    
				   break;
				   case 2:
				   printf("_____Welcome to Family bank_______");
				   printf("\nPlease Enter your bank account number:");
				   scanf("%d",&account);
				   printf("Enter Amount you want to pay:");
				   scanf("%lf",&Amount);
				   printf("Enter your Reg Num:");
    		       scanf("%d",&reg);
    		       printf("please Enter your phone number");
    		       scanf("%d",&Num1);
				   printf("\nyour payment is being work upon: ");
				   printf("\n ---------------------Family BANK----------------------------- ");
				   printf("\n*                           Your futer dream is fullfill    * ");
				   printf("\n*                           ________________                * ");
				   printf("\n*                          | FORM NO.A 763L |               * ");
				   printf("\n*                           ----------------                * ");
				   printf("\n*                   Transaction receipt                     * ");
				   printf("\n*        BRANCH:CHUKA BRANCH                                * ");
				   printf("\n*  Date 08-10-2022  03:10:34                                * ");
				   printf("\n*  Account No:%d                                            * ",account);
				   printf("\n*  Account Name:Chuka university                            * "); 
				   printf("\n*  Cash Amount:Ksh%.2lf                                     * ",Amount);
				   printf("\n*  Reg num:%d                                               * ",reg);
				   printf("\n*  Customer signature:*****                                 * ");
				   printf("\n*  Mobile number:%d                                         * ",Num1);
				   printf("\n* _________________________________________________________* ");
				   printf("\nTogether we proceed our happy customer: ");
				   printf("\nRate or sevrices by giving us five stars:");
				   scanf("%d",&Num1);
				   break;
				   case 3:
				   printf("************Welcome to Faulu bank****************");
				   printf("\nPlease Enter your bank account number:");
				   scanf("%d",&Num1);
				   printf("Enter Amount you want to pay:");		
				   scanf("%lf",&Amount);
				   printf("Enter your Reg Num:");
    		       scanf("%d",&reg);
    		       printf("please Enter your phone number");
    		       scanf("%d",&Num1);
				   printf("\nyour payment is being work upon: ");
				   printf("\n ---------------------Faulu BANK---------------------------- ");
				   printf("\n*                             Yes we can change the world   * ");
				   printf("\n*                           ________________                * ");
				   printf("\n*                          | FORM NO.R 456E |               * ");
				   printf("\n*                           ----------------                * ");
				   printf("\n*                   Transaction receipt                     * ");
				   printf("\n*        BRANCH:CHUKA BRANCH                                * ");
				   printf("\n*  Date 08-10-2022  03:10:34                                * ");
				   printf("\n*  Account No:%d                                  * ",account);
				   printf("\n*  Account Name:Chuka university                            * "); 
				   printf("\n*  Cash Amount:Ksh%.2lf                                    * ",Amount);
				   printf("\n*  Reg num:%d                                            * ",reg);
				   printf("\n*  Customer signature:*****                                 * ");
				   printf("\n*  Mobile number:%d                                * ",Num1);
				   printf("\n* _________________________________________________________* ");
				   printf("\nlet's do it again our happy customer: ");
				   printf("\nRate or sevrices by giving us five stars:");
				   scanf("%d",&Num1);
				   break;
				   case 4:
				   printf("-----------Welcome to Co-operative bank---------------");
				   printf("\nPlease Enter your bank account number:");
				   scanf("%d",&Num1);
				   printf("Enter Amount you want to pay:");
				   scanf("%lf",&Amount);
				   printf("Enter your Reg Num:");
    		       scanf("%d",&reg);
    		       printf("please Enter your phone number");
    		       scanf("%d",&Num1);
				   printf("\nyour payment is being work upon: ");
				   printf("\n ---------------CO-OPERATIVE BANK----------------------------- ");
				   printf("\n*                             We are you                    * ");
				   printf("\n*                           ________________                * ");
				   printf("\n*                          | FORM NO.X 456U |               * ");
				   printf("\n*                           ----------------                * ");
				   printf("\n*                   Transaction receipt                     * ");
				   printf("\n*        BRANCH:CHUKA BRANCH                                * ");
				   printf("\n*  Date 08-10-2022  03:10:34                                * ");
				   printf("\n*  Account No:%d                                  * ",account);
				   printf("\n*  Account Name:Chuka university                            * "); 
				   printf("\n*  Cash Amount:Ksh%.2lf                                    * ",Amount);
				   printf("\n*  Reg num:%d                                            * ",reg);
				   printf("\n*  Customer signature:*****                                 * ");
				   printf("\n*  Mobile number:%d                                 * ",Num1);
				   printf("\n* _________________________________________________________* ");
				   printf("\nLet's make it happen our happy customer: ");
				   printf("\nRate or sevrices by giving us five stars:");
				   scanf("%d",&Num1);
				   break;
				   case 5:
				   printf("------------Welcome to Equity bank-----------------");
				   printf("\nPlease Enter your bank account number:");
				   scanf("%d",&Num1);
				   printf("Enter Amount you want to pay:");
				   scanf("%lf",&Amount);
				   printf("Enter your Reg Num:");
    		       scanf("%d",&reg);
    		       printf("please Enter your phone number");
    		       scanf("%d",&Num1);
				   printf("\nyour payment is being work upon: ");
				   printf("\n -------------------EQUITY BANK----------------------------- ");
				   printf("\n*                          We are honour to serve you       * ");
				   printf("\n*                           ________________                * ");
				   printf("\n*                          | FORM NO.M 167N |               * ");
				   printf("\n*                           ----------------                * ");
				   printf("\n*                   Transaction receipt                     * ");
				   printf("\n*        BRANCH:CHUKA BRANCH                                * ");
				   printf("\n*  Date 08-10-2022  03:10:34                                * ");
				   printf("\n*  Account No:%d                                        * ",account);
				   printf("\n*  Account Name:Chuka university                            * "); 
				   printf("\n*  Cash Amount:Ksh%.2lf                                    * ",Amount);
				   printf("\n*  Reg num:%d                                            * ",reg);
				   printf("\n*  Customer signature:*****                                 * ");
				   printf("\n*  Mobile number:%d                                 * ",Num1);
				   printf("\n* _________________________________________________________* ");
				   printf("\nThanks for choosing Equity Bank[Kenya]Ltd: ");
				   printf("\nRate or sevrices by giving us five stars:");
				   scanf("%d",&Num1);
				   break;				
				   default:
		        	printf("%C Is invalid choice:",opt);
				   
				   }
				   	}
				   else if(opt==r	){
				   	printf("you want to pay your cheque using which bank?");
			    	printf("\n1.KCB bank. ");
				    printf("\n2.Family bank. ");
			        printf("\n3.Faulu bank. ");
	     	        printf("\n4.Corporative bank. ");
			        printf("\n5.Equity bank. ");
			        printf("\nplease select one of the above");
			        scanf("%d",&opt);
			        system("cls");
				    printf("\nSorry you don't have enough Amount in your cheque..");
				    printf("\nPlease deposit amount to your account");
				   
				   	goto welcome;
				   	}
				   	//system("cls");
				   	goto welcome;
		         	case 4:
		         		printf("\n*******Welcome to Chuka university hostels booking*********");
		         		printf("\nwhich gender are you?");
		         		scanf("%c");
		         		char gender;
						 printf("\nF/M:");
		         		scanf("%c",&gender);
		         		gender=toupper(gender);
		         		if(gender=='F')
		         		{
		         			printf("\nBOOK NOW female hostels:");
		         			printf("\nwelcome to runda hostels");
		         			Fbookroom();
		         			goto welcome;
		         			
						 }
						 else if(gender=='M')
						 {
						 	printf("\nWelcome to male hostels:");
						 	Mbookroom();
						 	male_empty_rooms();
						 	goto welcome;
						 }
						 else
						 {
						 	printf("invalid gender!!!!!!!!!!!");
						 }
		         		
				   }
          
			
		
			
    return 0;
}
void Mbookroom()
{
	yes:
//	unsigned int room,flour;
	printf("\nenter the flour to book:");
	scanf("%d",&flour);
	printf("\nenter the room number to book:");
	scanf("%d",&flour);
	char response;
	if( Mhostel[flour][room]!='X')
	{
		printf("\nthe room is available do you what to book the room:");
		scanf("%c");
		scanf("%c",&response);
		response=toupper(response);
		if(response=='Y')
		{
			Mhostel[flour][room]=booked;
			printf("\nyou have successfuly booked the room:");
		}
		else
		{
			printf("\nyou have cancelled the room booking process:");
			goto yes;
		}
		
	}
	else
	{
		printf("roomboked");
		goto yes;
	}
	
}
void female_empty_rooms()
{
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(Fhostel[i][j]!='X')	
			{
				printf(" ***************flour %d__________room %d ******************");
			}
			
		}
	}
}
void male_empty_rooms()
{
	int i,j;
	for(i=0;i<10;i++)
	{
			printf("\n+----+----+----+----+----+----+----+----+----+----+");
			printf("\n| %c  | %c  | %c  | %c  | %c  | %c  | %C  | %c  | %c  | %c  |",Mhostel[i][0],Mhostel[i][1],Mhostel[i][2],Mhostel[i][3],Mhostel[i][4],Mhostel[i][5],Mhostel[i][6],Mhostel[i][7],Mhostel[i][8],Mhostel[i][9]);
			printf("\n+----+----+----+----+----+----+----+----+----+----+");
	}
}
void Fbookroom()
{
	yes:
//	unsigned int room,flour;
	printf("\nenter the flour to book");
	scanf("%d",&flour);
	printf("\nenter the room number to book");
	scanf("%d",&flour);
	char response;
	if( Fhostel[flour][room]!='X')
	{
		printf("\nthe room is available do you what to book the room:");
		scanf("%c");
		scanf("%c",&response);
		response=toupper(response);
		if(response=='Y')
		{
			Fhostel[flour][room]=booked;
			printf("\nyou have successfuly booked the room:");
		}
		else
		{
			printf("\nyou have cancelled the room booking process:");
			goto yes;
		}
		
	}
	else
	{
		printf("\nroomboked:");
		goto yes;
	}
	
}

	

