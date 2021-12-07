//This Programm is for Find the last digit number is odd or even.
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter a=");
	scanf("%d",&a);
	b=a%10;
	if(b%2==0)
	{
		printf("Last Digit of your number is Even");
	}
	else
	{
		printf("Last Digit of your number is Odd");
	}
}