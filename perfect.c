#include<stdio.h>
void main()
{
	int n,i,sum;
	i=1,sum=0;
	printf("Enter Number=");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
		sum=sum+i;
		}
		i++;
	}
	if(sum==n)
	{
		printf("Perfect number");
	}
	else
	{
		printf("Not a perfect number");
	}
}