#include <stdio.h>
void main()
{
	float Km,m,F,I,cm;
	printf("enter Km=");
	scanf("%f",&Km);
	m=Km*1000;
	F=Km*3280.84;
	I=Km*39370.1;
	cm=Km*100000;
	printf("m=%f\n",m);
	printf("F=%f\n",F);
	printf("I=%f\n",I);
	printf("cm=%f\n",cm);
}
