#include<stdio.h>
int main(int argc, char** argv)
{
	char digit;
		printf("\t\tTHE FOLLOWING ARE COUNTIES IN KENYA\n\n");
			printf("1.NAIROBI\t\t2.MOMBASA\n3.KISUMU\t\t4.EMBU\n");
			printf("Which is the capital city of Kenya\n");
			scanf("%c",&digit);
			// If ...else..if condition starts here
			if(digit=='1')
		{
			printf("CORRECT CHOICE\n");
		}
		 else if(digit=='2')
		{
			printf("WRONG CHOICE\n");
		}
		 else if(digit=='3')
		{
			printf("WRONG CHOICE\n");
		}
		 else if(digit=='4')
		{
			printf("WRONG CHOICE\n");
		}
		else
		{
			printf("INVALID INPUT\n");
		}
		
	return 0;
}



