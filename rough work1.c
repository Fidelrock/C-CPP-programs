	#include<stdio.h>
	int main()	
	{
		char digit;
	printf("\nWELCOME TO UNIVERSITY SCHOOLS\n\n");
		printf("\nWhich University below do you prefer\n\n");
		printf("1.CHUKA UNIVERSITY\n2.KIRINYAGA UNIVERSITY\n3.TECHNICAL UNIVERSITY OF KENYA\n4.DEDAN KIMATHI UNIVERSITY\n");	
		scanf("%c",&digit);
		//The following is an if...else...if condition on the users choice pertaining universities above
		
		if(digit=='1')
		{
			printf("WELCOME TO CHUKA UNIVERSITY\n");
		}
		 else if(digit=='2')
		{
			printf("WELCOME TO KIRINYAGA UNIVERSITY\n");
		}
		 else if(digit=='3')
		{
			printf("WELCOME TO TECHNICAL UNIVERSITY OF KENYA\n");
		}
		 else if(digit=='4')
		{
			printf("WELCOME TO DEDAN KIMATHI UNIVERSITY\n");
		}
		else
		{
			printf("INVALID INPUT\n");
		}
		
	

	} 