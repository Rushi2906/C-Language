#include<stdio.h>
void main()
{
    int i,j,n,sum1,sum2;
    sum1=0;

    printf("Enter N:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum2=0;
        for(j=1;j<=i;j++)
        {
            sum2=sum2+j;
        }
        sum1=sum1+sum2;
    }
    printf("sum=%d",sum1);
}