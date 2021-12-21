#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int i,j,n;
  printf("Enter n:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    if(i==1 || i==n)
    {
      for(j=1;j<=n;j++)
      {
        printf("*");
      }
    }
    else
    {
      for(j=1;j<=n;j++)
      {
        if(j==1 || j==n)
        {
          printf("*");
        }
        else
        {
          printf(" ");
        }
      }
    }
    printf("\n");
  }
  return 0;
}