#include<stdio.h>
void main()
{
	int n,i;
	i=2;
	printf("Enter Number=");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			printf("Number is not Prime Number.");
			break;
		}
		if(n%i!=0)
		{
			printf("Number Is Prime Number.");
			break;
		}
		i++;
	}
}