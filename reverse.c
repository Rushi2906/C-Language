#include<stdio.h>
void main()
{
	int n,i,a;
	printf("Enter n=");
	scanf("%d",&n);
	a=0;
	while(n>0)
	{
		i=n%10;
		n=n/10;
		a=(a*10)+i;
	}
	printf("%d",a);
}