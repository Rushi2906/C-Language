//Sum of all Elements of Matrix.
#include<stdio.h>
void main()
{
    int i,j,sum=0;
    int num[3][3];

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",num[i][j]);
            sum=sum+num[i][j];
        }
        printf("\n");
    }
    printf("sum=%d\n",sum);
}
