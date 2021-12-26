#include<stdio.h>
void main()
{
    int i,j,n,sum;
    sum=0;
    printf("Enter N=");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
           sum=sum+1;
           printf("%d\t",sum);
        }
         printf("\n");
    }
}