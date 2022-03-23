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

  /*
  #include<stdio.h>

int main()
{
    int temp;
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(j!=0)
             {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
             }

        }
    }
    for(int k=0;k<5;k++)
    {
        printf("%d\t",arr[k]);
    }


return 0;

}

*/