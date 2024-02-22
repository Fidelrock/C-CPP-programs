//Digital clock system
#include<stdio.h>
#include<conio.h>
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
	while(h>0&&h<24)
	{
		
	
	while(m>0&&m<60)
	{
		

	while(s>0&&s<60)
	{
		//Sleep(1000);
		system("cls");
		for(i=0;i<10;i++)
		{
			printf("\n");
		}
		for(i=0;i<6;i++)
		{
			printf("\t");
		}
		s--;
		printf("hh: mm: ss\n ");
			for(i=0;i<6;i++)
		{
			printf("\t");
		}
		printf("%2d: %2d :%2d \n",h,m,s);
	}
	m--;
	s=59;
	}
		h--;
		m=59;
	}
	h=23;
	goto new_day;
	getch();
	
}