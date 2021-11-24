#include <stdio.h>
void main ()
{
	int days,weeks,years;
	printf("enter days=");
	scanf("%d",&days);
	years=days/365;
	weeks=(days%365)/7;
	days=days-((years*365)+(weeks*7));
	printf("%d year:%d weeks:%d days",years,weeks,days);
}
