#include<stdio.h>
void main()
{
	int a,b,sum;
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);
	sum=a+b;
	int *p;
	p=&sum;
	printf("sum=%d\n",sum);
	printf("address=%d",p);
}