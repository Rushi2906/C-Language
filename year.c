//This programm is for check weather the given year is leap year or not leap year.
#include<stdio.h>
void main()
{
	int year;
	printf("Enter Year=");
	scanf("%d",&year);
	if(year%400==0)
	{
		printf("Year Is Leap year");
	}
	else if(year%4==0 && year%100!=0)
	{
		printf("Year Is Leap Year");
	}
	else
	{
		printf("Year Is not a Leap Year");
	}
}