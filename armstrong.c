#include<stdio.h>
void main()
{
	int sum=0,n,a,b;
	printf("Enter Number=");
	scanf("%d",&n);
	b=n;
	while(n>0)
	{
		a=n%10;
		sum=sum+(a*a*a);
		n=n/10;
	}
	if(sum==b)
	{
		printf("Armstrong Number.");
	}
	else
	{
		printf("Not a Armstrong Number.");
	}
}