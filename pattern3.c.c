#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int n,i,j;
  printf("Enter n=");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
    for(j=1;j<=(n-i);j++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}