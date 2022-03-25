#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
  int ways=0;
  int sum=0;
  int arr[3]={1,2,3};
  for(int i=0;(sum<=4 && i<3);i++)
  {
    sum=0;
    while(sum<=4)
    {
      if(sum==4)
      {
        ways++;
        break;
      }
      sum+=arr[i];
    }
  }
  printf("ways=%d\n",ways);
 // ways=0;
  int j=0,r=0;
  for(int i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      sum=0;
      if(i!=j)
      {
        sum=arr[i]+arr[j];
          while(sum<=4)
           {
             if(sum==4)
              {
                ways++;
                printf("ways=%d\t i=%d\t j=%d\n",ways,i,j);
                 break;
              }
               sum+=arr[j];
            }
      }
      
    }
    
  }
  printf("final=%d\n",ways-1);

  return 0;

}
