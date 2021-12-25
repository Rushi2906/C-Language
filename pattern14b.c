#include<stdio.h>
void main()
{
    int i,j,n;
    float fact,div,sum;
    sum=1.0;

    printf("Enter N:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fact=1.0;
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        div=1/fact;
        sum=sum+div;
    }
    printf("e=%f",sum);
}