//Digital clock system
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<unistd.h>
int main(int argc, char** argv)
{
	int h,m,s,i;
	printf("Enter the current time in the format of hh:mm:ss\n");
	
	printf("Enter hours ");
	scanf("%d",&h);
	printf("Enter minutes ");
	scanf("%d",&m);
	printf("Enter seconds ");
	scanf("%d",&s);
	new_day:
	while(h<24)
	{
		
	
	while(m<60)
	{
		

	while(s<60)
	{
		sleep(1000);
		system("cls");
		for(i=0;i<10;i++)
		{
			printf("\n");
		}
		for(i=0;i<6;i++)
		{
			printf("\t");
		}
		s++;
		printf("hh: mm: ss\n ");
			for(i=0;i<6;i++)
		{
			printf("\t");
		}
		printf("%2d: %2d :%2d \n",h,m,s);
	}
	m++;
	s=0;
	}
		h++;
		m=0;
	}
	h=0;
	goto new_day;
	getch();
	
}