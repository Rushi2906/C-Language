#include<stdio.h>
void main()
{
    int i,j,n,x;
    float fact,div,sum,pow;
    sum=1.0;

    printf("Enter N and X:");
    scanf("%d\n%d",&n,&x);

    for(i=1;i<=n;i++)
    {
        fact=1.0;
        pow=1.0;
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
            pow=pow*x;
        }
        div=pow/fact;

        if(i%2==0)
        {
            sum+=div;
        }
        else
        {
            sum-=div;
        }
    }
    printf("e^x=%f",sum);
}