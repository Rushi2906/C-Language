#include <stdio.h>
void main ()
{
	int a,b,c;
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);
	printf("Press 1 for Addition\n");
	printf("Press 2 for Substraction\n");
	printf("Press 3 for Multiplication\n");
	printf("Press 4 for Divison\n");
	printf("Enter Your choice c=");
	scanf("%d",&c);
	if(c==1)
	{
		printf("%d+%d=%d,a,b,a+b");
	}	
	if(c==2)
	{
		printf("%d-%d=%d,a,b,a-b");
	}	
	if(c==3)
	{
		printf("%d*%d=%d,a,b,a*b");
	}	
	if(c==4)
	{
		printf("%d/%d=%d,a,b,a/b");
	}	
	if(c>>4)
	{
		printf("Invalid Input,Please Press valid Input");
	}	
}
