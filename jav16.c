#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>

int main()
{
	int opt;
	printf("---------------------safaricom kenya--------------------\n");
	printf("\t\tCarrier info\n");
	printf("0:Nyakua Bonus\n");
	printf("1:My Data Deals\n");
	printf("2:Daily Bundles New\n");
	printf("3:Weekly Bundles New\n");
	printf("4:Monthly Bundles New\n");
	printf("5:No Expiry Bundles\n");
	printf("select option of your choice\n");
	scanf("%d",&opt);
	switch(opt)
	{
		case 0:
			printf("\t\tCarrier info\n");
			printf("Nyakua Bonus\n");
        	printf("1:Buy Nyakua Bundles\n");
        	printf("2:Check my target\n");
        	printf("3:Check My Daily Usage\n");
        	printf("select option of your choice\n");
        	scanf("%d",&opt);
        	
        	   switch(opt)
        	   {
        	   	case 1:
        	   		printf("\t\tCarrier info\n");
                	printf("1:Daily Bundles\n");
                	printf("2:Weekly Bundles\n");
                	printf("3:Monthly Bundles\n");
                	printf("select option of your choice\n");
        	        scanf("%d",&opt);
                	
                	
                	
                	break;
        	   		case 2:
        	   		printf("\t\tCarrier info\n");
                	printf("1:Daily Bundles\n");
                	printf("2:Weekly Bundles\n");
                	printf("3:Monthly Bundles\n");
                	printf("select option of your choice\n");
        	        scanf("%d",&opt);
			   }
        	break;
			
	}
	
	return 0;
	 
 
}
