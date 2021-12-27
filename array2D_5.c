//Multiplication of Two Matrix.
#include<stdio.h>
void main()
{
    int i,j;
    int r,c,a[100][100],b[100][100],multi[100][100];

    printf("Enter number of row:");
    scanf("%d",&r);
    printf("Enter number of colum:");
    scanf("%d",&c);

    printf("Enter value for matrix A\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter a%d%d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter value for matrix B\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter b%d%d:",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            multi[i][j]=((a[i][j])*(b[i][j]));
        }
    }

    printf("Multiplication of  Matrix=\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",multi[i][j]);
        }
        printf("\n");
    }
}
