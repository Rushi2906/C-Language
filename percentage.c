#include <stdio.h>
void main()
{
	float A,B,C,D,E,P;
	printf("enter A=");
	scanf("%f",&A);
	printf("enter B=");
	scanf("%f",&B);
	printf("enter C=");
	scanf("%f",&C);
	printf("enter D=");
	scanf("%f",&D);
	printf("enter E=");
	scanf("%f",&E);
	P=((A+B+C+D+E)/500)*100;
	printf("Percentage=%f",P);
}
