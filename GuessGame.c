#include<stdio.h>

int main(){
	int luckyNumber = 7;
	int guesses;
	int guesscount = 0;
	int guesslimit = 3;
	int outOfGuesses = 0;
	
	//while loop
	
	
	while(guesses!=luckyNumber && outOfGuesses==0){
		
		if(guesscount <guesslimit){
			printf("Enter your guesses: \n");
			scanf("%d",&guesses);
			
			guesscount++;
			
		}
		else
		{
			outOfGuesses=1;
			
		}
		
	}
	if(outOfGuesses==1){
		printf("You're out of guesses!\n");
	}
	else
	{
		printf("You Win!!!");
	}
	return 0;
	
}