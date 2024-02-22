#include<stdio.h>
#include<conio.h>

int main(int argc, char** argv)
{
	int slice;
	printf("Enter the number of slices you ate\n");
	scanf("%d",&slice);// We are accepting the number of slices from the user so we declare variable int
	switch(slice)
	{
		case 1 :
		{
			printf("you can add a slice");
			break;
		}
			
		case 2 :
		{
			printf("You can add another one");
			break;	
		}
		
		case 3 :
		{
				printf("Ok one more");
			break;
		}
		
		case 4 :
		{
			printf("Wow!!! No more");
			break;
		}	
			
		default :
		{
				printf("Oh thats too much");
			break;
		}
		
	}
	getch();
	return 0;
}