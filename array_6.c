#include<stdio.h>
void main()
{
    int n;
    int i,sum=0,count=0,avg;

    printf("Enter size of an arrray:");
    scanf("%d",&n);
    int num[n];
    
    for(i=0;i<n;i++)
    {
        printf("Enter array element:");
        scanf("%d",&num[i]);
        sum=sum+num[i];
        avg=sum/n;
    }

    for(i=0;i<n;i++)
    {
        if(num[i]>avg)
        {
            count++;
        }
    }
    printf("Number higher than averages=%d\n",count);
}