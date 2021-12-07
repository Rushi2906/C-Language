#include<stdio.h>
void main()
{
	int i,a,b;
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);
	i=a;
	while(i>=a && i<=b)
	{
		if(i%2==0 && i%3!=0)
		{
			printf("%d\n",i);
		}
		i++;
	}

}