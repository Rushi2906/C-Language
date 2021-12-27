#include<stdio.h>
void main()
{
    int i;
    int num[10];

    for(i=0;i<10;i++)
    {
        printf("Enter array Element:");
        scanf("%d",&num[i]);
    }

    for(i=9;i>=0;i--)
    {
        printf("%d\n",num[i]);
    }
}