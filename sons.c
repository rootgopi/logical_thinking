#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
  int mark=4;
  int i,j,dum,sam;
  int arr[4]={2,1,6,7};
  for(i=0;i<4;i++)
  {
    dum=0;
    sam=0;
    for(j=0;j<4;j++)
    {
      if(i==j)
      {
        dum=mark+arr[j];
      }
      else 
       sam+=arr[j];

    }
    printf("dum=%d\t sam=%d\t i=%d\n",dum,sam,i);
    if(dum>sam)
    {
      printf("$=%d\n",i);
    }
  }

  return 0;
}