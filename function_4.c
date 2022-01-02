#include<stdio.h>
int number(int a);
void main()
{
	int a,prime;
	printf("Enter a=");
	scanf("%d",&a);
    prime=number(a);
    printf("%d",prime);
}
int number(int a)
{
    int i,prime;
    for(i=2;i<=a;i++)
    {
        if(a%i==0)
        {
            prime=0;
            break;
        }
        if(a%i!=0)
        {
            prime=1;
            break;
        }
    }
	return prime; 
}