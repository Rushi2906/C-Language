#include<stdio.h>
void main()
{
	int month;
	printf("Enter Month=");
	scanf("%d",&month);
	switch(month)
	{
		case 1:
		printf("No. of Days=31");
		break;

		case 2:
		printf("No. of Days=28");
		break;

		case 3:
		printf("No. of Days=31");
		break;

		case 4:
		printf("No. of Days=30");
		break;

		case 5:
		printf("No. of Days=31");
		break;

		case 6:
		printf("No. of Days=30");
		break;

		case 7:
		printf("No. of Days=31");
		break;

		case 8:
		printf("No. of Days=31");
		break;

		case 9:
		printf("No. of Days=30");
		break;

		case 10:
		printf("No. of Days=31");
		break;

		case 11:
		printf("No. of Days=30");
		break;

		case 12:
		printf("No. of Days=31");
		break;

		default:
		printf("Please Check Your Input");

	}
}