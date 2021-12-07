#include<stdio.h>
void main()
{
	int i,n;
	i=1;
	printf("Enter n=");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2!=0)
			{
				printf("%d\n",i);
				
			}
		i++;
	}
}