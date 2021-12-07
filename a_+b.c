#include<stdio.h>
void main()
{
	int a,b,i,sum;
	sum=0;
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);
	i=a;
	while(i<=b)
	{
		sum=sum+i;
		i++;
	}
	printf("%d\n",sum);
}