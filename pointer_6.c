#include<stdio.h>
void main()
{
	int l,i;
	char str[10],*ptr;
	ptr=str;
	scanf("%s",str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		printf("%c is at location %u\n",*(ptr+i),(ptr+i));
	}
}