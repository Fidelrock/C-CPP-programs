
#include<stdio.h>
int main(int argc, char** argv)
{
char name[15];
char thanks[20];
printf("Enter name and thanks\n");

scanf("%s%s",&name,&thanks);

while(name)
{
	
	printf("\n%s\n%s",name,thanks);
}

	return 0;
}