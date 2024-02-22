#include<stdio.h>

/*function declaration*/
void func(void);

static int count= 5; //global variable

 	 main(int argc, char** argv)
{
	while (count--)
	{
		func();
	}
	return 0;
}
/*function definition*/
void func(void)
{
static int i =5; //local variable
i++;
printf("i is %d and count is %d\n",i,count);


}