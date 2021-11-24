# include <stdio.h>
void main ()
{
	int a,b;
	printf("enter a=");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("new value of a=%d\n",a);
	printf("new value of b=%d",b);
}
