#include<stdio.h>
#include<stdlib.h>

int len(int g)
{
  int count=0;
  while(g>0)
  {
    g=g/10;
    count++;
  }
  return count;
}
int powr(int b)
{
  int ten=1;
  int i=0;
  while(i<b)
  {
    ten=ten*10;
    i++;
  }
  return ten;
}
long long com(int giv)
{
  static unsigned long long res;
    res=(res*(powr(len(giv))))+(giv);
    return res; 
 
}
int last(int given)
{
  while(given>9)
  {
    given=given/10;
  }
  return given;

}
int main()
{
   int a[4]={54,546,548,60};
   int n=4; // 
   int key=-1;
   int j=0,z=0;
   int fin;
   while(j<n)
   {
    key=-1;
      for(int i=0;i<n;i++)
      {
       if(last(a[i])>key)
        {  
          key=last(a[i]);
          z=i;
         }                               //54,546,548,60
        else if(last(a[i])==key)
        {
          if(a[i]>a[z])
          {
            key=last(a[i]);
            z=i;
          }
        }

      }
    fin=a[z];
    a[z]=-1;
    j++;
    if(j==n)
      printf("res=%lld\n",com(fin));
    else
      com(fin);
   
    
   }

    return 0;

}

