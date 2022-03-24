#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int checkmin(int a,int b,int c)
{
    return (c-a)<(c-b)?a:b;

}
int main()
{
  int inp=555;
  int dum=inp;
  int rem,quo,j=0;
  int arr[4];
  while(inp>9)
  {
    rem=inp%10;
    arr[j]=rem;
    quo=inp/10;
    j++;
    inp=quo;
  }
  arr[j]=inp;
  int i,dum1=dum;
  while(dum1>0)
  {
     i=3;
     /* the below can be done by automating the arr[i] in for loop until the j value reaches...
     if the condition becomes true make the array elements as 1 and check if all the elements in the 
     array is 1.if 1 then go through or another method is there...
     dum1=dum;
    int flag=0;
     while(1)
     {
       flag=0;
       for(int i=0;i<j;i++)
       {
       if(dum1%arr[i]==0) 
         flag++;
       }
       if(flag!=j)
        dum1++;
      else 
        break;
     }
     
     printf("##=%d\n",dum1);
     */
     
    if((dum1%arr[i]==0)&&(dum1%arr[i--]==0)&&(dum1%arr[i--]==0)&&(dum1%arr[i--]==0))
    {
     break;
    }
    else
     dum1++;
  }
  printf("dum1=%d\n",dum1);
  int dum2=dum;
  while(dum2>0)
  {
     i=3;
    if((dum2%arr[i]==0)&&(dum2%arr[i--]==0)&&(dum2%arr[i--]==0)&&(dum2%arr[i--]==0))
    {
     break;
    }
    else
     dum2--;
  }
  printf("dum2=%d\n",dum2);
  for(int i=0;i<4;i++)
    printf("%d\t",arr[i]);

printf("\nresult=%d\n",checkmin(dum1,dum2,dum));

  return 0;


}