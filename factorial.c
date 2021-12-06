#include<stdio.h>
void main()
{
	int i,n,sum;
	i=1;
	sum=1;
	printf("Enter n=");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=i*sum;
		i++;
	}
	printf("Answer=%d",sum);
}