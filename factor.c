#include<stdio.h>
void main()
{
	int i,n;
	i=1;
	printf("Enter N=");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
			printf("%d\n",i);
		}
		i++;
	}
}