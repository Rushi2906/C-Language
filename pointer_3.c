#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	int *ptr1;
	ptr1=&a;
	int *ptr2;
	ptr2=&b;
	printf("a=%d\n",*ptr1);
	printf("a=%d\n",ptr1);
	printf("b=%d\n",*ptr2);
	printf("b=%d\n",ptr2);
}