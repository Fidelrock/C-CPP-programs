//Swapping using bitwise XOR
#include<stdio.h>
void  main()
{
	long i,k;
	printf("Enter two integers\n");
	scanf("%ld %ld",&i,&k);
	printf("\nBefore swapping\ni=%ld\nk=%ld",i,k);
	i=i^k;
	k=i^k;
	i=i^k;
	printf("\nAfter swapping\ni=%ld\nk=%ld",i,k);
	//return 0;
}