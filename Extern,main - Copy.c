#include<stdio.h>
/*Extern is always used as a global variable*/
int count;

extern void write_extern();

 main(int argc, char** argv)
{
	count =5;
	write_extern();
	
}