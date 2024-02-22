// Converting a string to lont int etc:
#include<stdio.h>

#include<stdlib.h>
int main(int argc, char** argv)
{
	char *double_test="94.25";
	char *int_test="94";
	char *long_int_test="5432654241";
	
	double double_result= atof(double_test);
	int int_result= atoi(int_test);
	long int long_int_result = atol(long_int_test);
	
	printf("double=:%f\n", double_result);
	printf("int=:%d\n", int_result);
	printf("long int=:%ld\n", long_int_result);
	return 0;
}