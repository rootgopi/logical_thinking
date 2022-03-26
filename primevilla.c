#include<stdio.h>
#include<stdlib.h>
int isprime(int num)
{
    int i=2;
   while(i<=num)
   {
       if(i==num)
          return 1;
       if(num%i==0)
          return 0;
         else 
           i++;
         
   }
}
int noprime(int start,int end)
{
   int i=2,count=0;
   end=start+end;
   while(start<=end)
   {
      i=2;
      while(i<=start)
      {
         if(i==start)
         {
           count++;
           break;
         }
         if(start%i==0)
          break;
         else
           i++;
      }
       start++; 

   }

  return (count>0) ? count : -1;
}
int main()
{
   int wd=17;
   int month=7;
   //int day=12;
   int n=5;
   if(month<=12 && wd<=31 && (wd+n<=31))
   {
      if(isprime(wd) && isprime(month))
        printf("$=%d\n",noprime(wd,n));
      else 
       puts("not prime");
   }
   else
    puts("count error");
   return 0;

}