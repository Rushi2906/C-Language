#include<stdio.h>
int addition(int n);
void main()
{
	int n;
	int sum;
	printf("Enter n=");
	scanf("%d",&n);
	sum=addition(n);
	printf("%d",sum);
}
int addition(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    } 
	return sum; 
}