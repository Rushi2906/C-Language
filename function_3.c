#include<stdio.h>
int number(int a,int b);
void main()
{
	int a,b,min,max;
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);
    max=number(a,b);
    printf("max=%d",max);
}
int number(int a,int b)
{
    int max;
    if(a>b)
    {
        max=a;
    }
    else
    {
        max=b;
    }
	return max; 
}