#include<stdio.h>
void main()
{
    int i,j,n,sum;
    printf("Enter N=");
    scanf("%d",&n);

    for(i=0;i<=(n-1);i++)
    {
        for(j=1;j<=(i+1);j++)
        {
           sum=i+j;
           printf("%d\t",sum);
        }
         printf("\n");
    }
}