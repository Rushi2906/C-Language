#include<stdio.h>
void main()
{
	int i,x,y,sum;
	i=1;
	sum=1;
	printf("Enter x=");
	scanf("%d",&x);
	printf("Enter y=");
	scanf("%d",&y);
	while(i<=y)
	{
		sum=x*sum;
		i++;
	}
	printf("Answer=%d",sum);
}