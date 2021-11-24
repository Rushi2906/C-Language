#include <stdio.h>
void main()
{
	float P,R,N,SI;
	printf("enter P=");
	scanf("%f",&P);
	printf("enter R=");
	scanf("%f",&R);
	printf("enter N=");
	scanf("%f",&N);
	SI=(P*R*N)/100;
	printf("Simple Interest=%f",SI);
}
