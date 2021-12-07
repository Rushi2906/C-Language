//This programm is for check weather the given charcter is small,capital,digit or any special character.
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter Character=");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
	{
		printf("Character is Small letter");
	}
	else if(ch>='A' && ch<='Z')
	{
		printf("Character is Capital letter");
	}
	else if(ch>='0' && ch<='9')
	{
		printf("Character is Digit");
	}
	else
	{
		printf("Character is special Character");
	}
}