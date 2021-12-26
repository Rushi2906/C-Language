#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter N=");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((i%2==0 && j%2==0)||(i%2!=0 && j%2!=0))
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
         printf("\n");
    }
}