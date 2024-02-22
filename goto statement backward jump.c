#include<stdio.h>
int main(int argc, char** argv)
{
	int i;
	i=1;
	
	label:
	printf("\t%d",i);
	i++;
	if(i<=10)
	{
		goto label;
	}
	return 0;
}