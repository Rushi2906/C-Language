#include<stdio.h>
void main()
{
	int n,i,a,b;
	printf("Enter n=");
	scanf("%d",&n);
	b=n;
	a=0;
	while(n>0)
	{
		i=n%10;
		n=n/10;
		a=(a*10)+i;
	}
	if(a==b)
	{
		printf("Number is palindrome");
	}
	else
	{
		printf("Number is not palindrome.");
	}
}