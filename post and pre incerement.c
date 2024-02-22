#include<stdio.h>
int main(int argc, char** argv)
{
int a=32;
a++;
printf("%d\n",a);
++a;
printf("%d\n",a);

printf("%d\n",a++);
printf("%d\n",a++);
printf("%d\n",++a);	
	return 0;
}