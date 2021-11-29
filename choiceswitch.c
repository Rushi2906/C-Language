#include<stdio.h>
void main()
{
	char ch;
	int a,b;
	
	printf("+ for Addition\n");
	printf("- for Subtraction\n");
	printf("* for Multiplication\n");
	printf("/ for Divison\n");
	printf("Enter Choice=");
	scanf("%c",&ch);
	printf("Enter A=");
	scanf("%d",&a);
	printf("Enter B=");
	scanf("%d",&b);
	switch(ch)
	{
		case '+':
		printf("Answer=%d\n",a+b);
		break;

		case '-':
		printf("Answer=%d\n",a-b);
		break;

		case '*':
		printf("Answer=%d\n",a*b);
		break;

		case '/':
		printf("Answer=%d\n",a/b);
		break;

		default:
		printf("Please Input Valid Choice");

	}
}