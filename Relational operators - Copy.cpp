//relational operators in c
#include<stdio.h>
 
 int main(int argc, char** argv)
 {
 	/*declaring variables*/
 	
		int a =21;
		int b =10;
		int c;
		/* initializint operators*/
		
	 if(a==b)
	 {
	 	printf("Line 1- a is equal to b\n");
	 }
	 else
	 {
	 printf("Line 1- a is not equal to b\n");
	 	
	 }
	 if(a<b)
	 {
	 printf("Line 2-a is less than b\n");
	 }
	 else
	 {
		 printf("Line 2-a is not less than b\n");
	 }
	 if(a>b)
	 {
	 	printf("Line 3-a is greater than b\n");
	 }
	 else
	 {
		 printf("Line 3- a is not greater than b");
	 }
	 /*value of a and b  changed*/
	 a=5;
	 b=20;
	 if(a<=b)
	 {
	 	printf("Line 4-a is either less or equal to b\n");
	 }
	 if(b>=a)
	 {
	 	printf("Line 5- b is greater or equal to a\n");
	 }
	 	
	 return 0;
 }