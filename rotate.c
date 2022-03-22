#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[6]={1,2,3,4,5,6};
    int len=6;
    int rot=2;
    //we can get input from the user for len and rot  
    while(len-rot!=rot)
    {
        if(rot==0)
          rot=len;
       printf("$=%d\n",arr[len-rot]);
        rot--;
    }
  return 0;  