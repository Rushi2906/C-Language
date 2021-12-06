#include<stdio.h>
void main()
{
	float i,n,sum;
	i=1;
	sum=0;
	printf("Enter n=");
	scanf("%f",&n);
	while(i<=n)
	{

		sum=sum+(1/i);

		i++;
	}

	printf("Answer=%f",sum);

}