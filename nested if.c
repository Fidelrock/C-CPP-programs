 #include<stdio.h>
 int main(int argc, char** argv)
 {
	 int a=13;
	 int b=2;
	 int c, d;
	 printf("ENTER c\n");
	 scanf("%d",&c);
	  printf("ENTER d\n");
	  scanf("%d",&d);
	  fflush(stdin);
	  if(c==a)
	  {
	  	if(d==b)
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