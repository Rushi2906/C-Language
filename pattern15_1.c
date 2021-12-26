#include<stdio.h>
void main()
{
    int i,j,n,sum;
    printf("Enter N=");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
           printf("%d\t",j);
           sum=j+1;
        }
         printf("\n");
    }
}