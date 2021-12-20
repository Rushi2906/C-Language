#include<stdio.h>
void main()
{
	int n,sum,a;
	sum=0;
	printf("Enter NUMBER=");
	scanf("%d",&n);
	while(n>0)
	{
		a=n%10;
		n=n/10;
		sum=sum+a;
	}
	printf("%d",sum);
}