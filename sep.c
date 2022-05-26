#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
#include<stdbool.h>

int main()
{
   int size=10;
 int arr[9]={6,3,1,2,4,1,2,5,1};  //3
int l=0,i=0,j=0;
bool flag=false;
int min=arr[0],max=arr[0];
 while(j<9)
 {
    if(flag)
    {
    min=arr[i];
    max=arr[i];
    flag=false;
    }
    if(arr[j]<min)
      min=arr[j];
   if(arr[j]>max)
       max=arr[j];

   if(max-min<=2)
   {
     printf("%d\tmin=%d\tmax=%d\n",arr[j],min,max);
      j++;
   }
   else            //1,3,1,2,4,1,2,5,1
   {
      printf("*");
      flag=true;
      i=j;

   }
    

 }
 return 0;

}

