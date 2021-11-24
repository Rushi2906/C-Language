#include <stdio.h>
void main()
{
	int a,b,c;
	printf("#This Programm is for find largest number from given number\n");
	printf("enter value of a=");
	scanf("%d",&a);
	printf("enter value of b=");
	scanf("%d",&b);
	printf("enter value of c=");
	scanf("%d",&c);
	if(a>b&&a>c)
	{
		printf("%d is largest number");
	}
	if(b>a&&b>c)
	{
		printf("%d is largest number");
	}
	if(c>a&&c>b)
	{
		printf("%d is largest number");
	}
}
