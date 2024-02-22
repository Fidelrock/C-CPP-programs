#include<stdio.h>
int main(int argc, char** argv)
{
int a = 10;
 printf("Fidel\n");
 if (a== 10)
 {
 	goto LABEL;
 }
 printf("allow\n");	
 LABEL:
 printf("go to forward statement\n");
	return 0;
}