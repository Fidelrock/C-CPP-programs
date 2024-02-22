#include<stdio.h>
int main()
{
    int ar[50];
    int n,j, i;

    printf("How many numbers would you consider in your array ? \n");
    scanf("%d",&n);
    printf("Now enter the numbers one by one into the array \n");
    for(j=0; j<n; j++)
    {
        scanf("%d",&ar[j]);
    }
    for(i=0; i<n; i++)
    {
     if(ar[i] % 2 == 1)
    {
        printf("%d ",ar[i]);
    }
    }
    
    return 0;
    

}