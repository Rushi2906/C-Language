#include<stdio.h>
void main()
{
    int num[10];
    int i,pos=0,neg=0,zero=0;

    for(i=0;i<10;i++)
    {
        printf("Enter array Element:");
        scanf("%d",&num[i]);
    }

    for(i=0;i<10;i++)
    {
        if(num[i]>0)
        {
            pos++;
        }
        else if(num[i]<0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }
    printf("Positive=%d\n",pos);
    printf("Negativi=%d\n",neg);
    printf("Zero=%d",zero);
}