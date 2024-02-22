 #include<stdio.h>
 #include<stdlib.h>
 
 int main(int argc, char** argv)
 {
	 char a [10]="Fidel";
	 char b [10]="fidel@2002";
	 char c [10];
	 char d [10];
	 printf("ENTER c\n");
	 scanf("%s",&c);
	  printf("ENTER d\n");
	  scanf("%s",&d);
	  fflush(stdin);
	  if(strcmp(c)==a)
	  {
	  	if(strcmp(d)==b)
		  {
		  	 printf("CORRECT\n");
		  }
		  else
		  {
			   printf("WRONG\n");
		  }
	  }
	  else
	  {
		   printf("INVALID\n");
	  }
	 return 0;
 }