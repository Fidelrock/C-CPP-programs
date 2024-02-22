// Swapping two numbers using a third variable
#include<stdio.h>
#include<conio.h>

void main()
{
	char a,b;
	//clrscr();
		printf("\n Enter one character\n");
		scanf("%c",&a);
		printf("\nInput character is==> %c\n",a);
		fflush(stdin);// Clears input buffer
		printf("\n\n\nEnter second character\n");
		b=getchar();
		
		printf("\n ASCII value of character (%c) is==> %d\n",b,b);
		
	getch();	
	//return 0;
}