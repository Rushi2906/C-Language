#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter N=");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
        {
           printf("*");
        }
         printf("\n");
    }
}