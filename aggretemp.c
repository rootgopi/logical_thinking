#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int maxi(int a,int b)
{
  return (a>b)?a:b;
}
int main()
{
  int i=0,j=0;
   int max=3;
  int res=0,curr;
  int arr[3]={-1,2,3};
  int temp=0;
  for(i=0;i<max;i++)
  {
    temp+=arr[i];
     int sum=0;
    for(j=i;j<max;j++)
    {
       sum+=arr[j];
    }
    curr=maxi(temp,sum);
    if(curr>res)
      res=curr;
  }
printf("result=%d\n",res);

return 0;

}
