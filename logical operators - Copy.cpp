//testing logical operators

#include<stdio.h>

/*declaring variables*/

extern int a=5;
extern int b=20;

/*main function*/

int main(int argc, char** argv)
{

if(a&&b)
{
	printf("Line 1-condition is true\n");
}
else
{
	printf("Line 1 condition is false\n");
}
if(a||b)
{
	printf("Line 2-Condition is true\n");
}
else
{
	printf("Line 2- Condition is false\n");
}

/*value of a and b changed*/

a=0;
b=10;

// initializing variables

if(a&&b)
{
	printf("Line 3- Condition is true\n");
}
else
{
	printf("Line 3-Condition is false\n");
}
if(!(a&&b))
{
	printf("Line 4-Condition is true\n");
}
else
{
	printf("Line 4 - Condition not true\n");
}
// again
/*declaring variables*/

a=-2;
b=3;

if(a&&b)
{
	printf("Line 5-Condition is true\n");
}
else
{
	printf("Line 5- Condition is false\n");
}
// lets change the values of a and b
a=0;
b=0;

if(a==b)
{
	printf("Line 6-Condition is true\n");
}
else
{
	printf("Line 6-Condition is false\n\n");
}


	return 0;
}