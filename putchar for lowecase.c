//Use of putchar
#include<stdio.h>
int main(int argc, char** argv)
{
char a;
printf("\n Enter a character in upper case\n");
a=getchar();
printf("\n The character in uppercase is==>\n");
putchar(a);
printf("\n\nThe character in lowercase is==>\n");
putchar(a+32);	
	return 0;
}