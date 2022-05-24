#include<stdio.h>
#include<stdlib.h>

int *fact(int n) //2 6 3 4 12 8
{
    static int dum[9];
    for(int r=0;r<9;r++)
        dum[r]=0;
    int l=0;
for(int i=1;i<n;i++)
{
    if(n%i==0)
        dum[l++]=i;
    
}
return dum;
}

int check(int *x,int *a)
{
    int flag=0;
    int j=0;
    while(x[j]!=0)
    {
        for(int i=0;i<6;i++)
        {
            if(x[j]==a[i])
            {
                flag++;
            }
        }
        j++;
    }

    if(flag>=2)
      return 1;
    else
      return 0;
}


int main()
{
    int arr[6]={2,6,3,4,12,8};
    int *p; //3 //6 8 12
     for(int i=0;i<6;i++)
     {
       p=fact(arr[i]);
      if(check(p,arr))
        printf("%d\t",arr[i]);
     }

     return 0;

}
