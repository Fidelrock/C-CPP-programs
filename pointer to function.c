//pointer to function
#include<stdio.h>
void area(int *h,int *w)
{
	int ar;
	ar= *h**w;
	printf("Area=%d",ar);
}
int main(int argc, char** argv)
{
	int x,y;
	printf("Enter the height\n");
	scanf("%d",&x);
	printf("Enter the width\n");
	scanf("%d",&y);
	area(&x,&y);
	return 0;
}