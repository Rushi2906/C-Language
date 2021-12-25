#include<stdio.h>
void main()
{
    int row,col,n;

    printf("Enter N:");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            printf("%d\t",row*col);
        }
        printf("\n");
    }
}