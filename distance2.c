#include <stdio.h>
void main()
{
	float u,a,t,d;
	printf("enter u=");
	scanf("%f",&u);
	printf("enter a=");
	scanf("%f",&a);
	printf("enter t=");
	scanf("%f",&t);
	d=((u*t)+((a*t)*(a*t)));
	printf("distance=%f",d);
} 
