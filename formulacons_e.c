#include<stdio.h>
int main()
{
    float i,j,n,sum=1,a=1.0;
    printf("enter n=");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            a=a*j;
        }
        sum=sum+(1/a);
        a=1;
    }
    printf("%f",sum);
    return 0;
}