	#include<stdio.h>
	int main(int argc, char** argv)
	{
		char digit;
			printf("\t\tWELCOME TO SPORTS\n\n");
			printf("\t1.SOCCER\t2.RUGBY\n\t3.NETBALL\t4.HOCKEY\n");
		
			printf("\n\tWhich sport do you prefer?\n");
				fflush(stdin);
				scanf("%c",&digit);
					//If condition in case 1
				if(digit=='1')
				{
					printf("\nTHIS IS ALL ABOUT SOCCER\n");
						int num;
					printf("\nWhich position do you play?\n\n");
					fflush(stdin);
					scanf("%d",num);
					//If condition within If else condition
					
					if(num!=0)
					{
					printf("\nCORRECT\nYOU KNOW ABOUT SOCCER\n");	
					}
					else
					{
						printf("WRONG\nYOU ARE NOT A SOCCER FAN\n");
					}
					
				}
			
				
		return 0;
	}
	
	