#include<stdio.h>
void main()
{
	int i,j;
	int num[3][3],pos=0,neg=0,zero=0;

	for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&num[i][j]);

            if(num[i][j]>0)
            {
            	pos++;
            }
            else if(num[i][j])
            {
            	neg++;
            }
            else
            {
            	zero++;
            }
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",num[i][j]);
        }
        printf("\n");
    }

    printf("POsitive = %d\n",pos);
    printf("Negative = %d\n",neg);
    printf("Zero = %d",zero);

}