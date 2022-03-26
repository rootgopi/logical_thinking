#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int *x,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(x[j]>x[j+1])
            {
            int temp=x[j+1];
            x[j+1]=x[j];
            x[j]=temp;
            }

        }
    }

}
int main()
{
    int u=4;
    int arr[4]={3,4,5,1};
    bubble_sort(arr,u);
    int q=arr[0];
    printf("q=%d\n",q);
    // {1,3,4,5}
    int j=2,i;
    int prime,count;
while(j<70)
 { 
     prime=0;
    for(i=2; i<=j; i++)
     {
      if(i==j)
      {
        prime=j;
        break;
      }
      if(j%i==0)
      {
          prime=0;
          break;
      }

     }
     if(prime)
     {
      count=0;
      for(int k=1;k<u;k++)
       {
         if(prime%arr[k]==q)   //{1,3,4,5}
            count=count+1;
       }
     
      if(count==3)
        {
         printf("$=%d\n",prime);
    
        }

     }

     j++;
      
 }
    
    return 0;


}