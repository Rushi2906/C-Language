#include<stdio.h>
void main()
{
    int n;
    int i,sum=0,max,min,avg;

    printf("Enter size of an arrray:");
    scanf("%d",&n);
    int num[n];
    
    for(i=0;i<n;i++)
    {
        printf("Enter array element:");
        scanf("%d",&num[i]);
        sum=sum+num[i];
        avg=sum/n;
        max=num[i];
        min=num[i];
    }

    printf("sum=%d\n",sum);
    printf("average=%d\n",avg);

    for(i=0;i<n;i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
        if(num[i]<min)
        {
            min=num[i];
        }
    }
    printf("max=%d\n",max);
    printf("min=%d\n",min);
}