#include<stdio.h>
void main()
{
	int i;
	int a[5],*pa;
	pa=a;
	for(i=0;i<5;i++)
	{
		scanf("%d",pa+i);
	}

	for(i=0;i<5;i++)
	{
		printf("%d\n",*(pa+i));
	}

	int sum=0;


	for(i=0;i<5;i++)
	{
		sum=sum+*(pa+i);
	}

	printf("sum=%d",sum);
}