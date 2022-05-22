#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
  int n=7;
  n=n-1;
  for(int i=0;i<=n;i++)
  {
    for(int j=0;j<=n;j++)
    {
      if((i+j==n/2 || i+j==n+n/2 || j==i+n/2 || i==j+n/2 || (i==n/2 && j==n/2) ||
        (i==(n/2)-1 && (j==0 ||j==n))) && i>1)
      {
        printf(" *");
      }

      else
      {
        printf("  ");
      }

    }
    printf("\n");
  }

}
