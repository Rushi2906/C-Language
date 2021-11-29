#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter A=");
	scanf("%d",&a);
	printf("Enter B=");
	scanf("%d",&b);
	printf("Enter C=");
	scanf("%d",&c);
	(a>b)?(printf("Answer=%d",a*c)):(printf("Answer=%d",b*c));
}