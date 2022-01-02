#include<stdio.h>
float interest(int,int,int);
void main()
{
	int P,R,N;
	float intr;
	printf("Enter P=");
	scanf("%d",&P);
	printf("Enter R=");
	scanf("%d",&R);
	printf("Enter N=");
	scanf("%d",&N);
	intr=interest(P,R,N);
	printf("%f",intr);
}
float interest(int P,int R,int N)
{
	return (P*R*N)/100;
}
