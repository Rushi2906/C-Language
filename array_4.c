#include<stdio.h>
void main()
{
    int num[10];
    int i,even=0,odd=0;

    for(i=0;i<10;i++)
    {
        printf("Enter array Element:");
        scanf("%d",&num[i]);
    }

    for(i=0;i<10;i++)
    {
        if(num[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even=%d\n",even);
    printf("Odd=%d\n",odd);
}