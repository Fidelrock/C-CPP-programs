/*This is a decision making program that prompts a user to enter grade
*it performs various tasks afterwards*/

#include<stdio.h>
#include<conio.h>

int main()
{
	char grade;
	printf("\t\t\tPlease enter your grade::\n");
	scanf("%c",&grade);
	
	
	switch(grade)
	{
		case 'A':
		{
			printf("\n\t\t\tEXCELLENT\n\t\t\tYou scored over 70 percent\n");
			break;
		}
		case 'B':
		{
			printf("\n\t\t\tCREDIT\n\t\t\tYou scored between (60 and 69) percent\n");
			break;
		}
		case'C':
		{
			printf("\n\t\t\tSATISFACTORY\n\t\t\tYou scored between (50 to 59) percent\n");
			break;
		}
		case 'D':
		{
			printf("\n\t\t\tPASS\n\t\t\tYou scored between (40 to 49) percent\n");
			break;
		}
		case 'E':
		{
			printf("\n\t\t\tFAIL\n\t\t\tYou scored below 40 percent\n");
			break;
		}
		default:
		{
			printf("\n\t\t\tINVALID INPUT");
		}
		
		
		
	}
		getch();
		return 0;
	
}

