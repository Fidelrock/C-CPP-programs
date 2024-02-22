#include<stdio.h>
int main(int argc, char** argv)
{
	int n,i;
	int a= 0;
	int b= 1;
	int c;
	 
	 printf("Enter the limit number\n");
	 scanf("%d",& n);
	 
	 for(i=1; i<=n; i++)
	 {
	 	printf("%d\t" ,a);
	 	
	 	c =a+b;
	 	a=b;
	 	b=c;
	 }
	 printf("\n");
	 
	 for(i=0;i<=n;i++){
		 printf("%d",i);
	 }
	 printf("\n");
	  for(i=n;i>=0;i--){
		 printf("%d",i);
	 }
	 	
	 
	return 0;
}