#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int stoi(char a)
{
  return a-'0';
}
int power(int g)
{
   int val=1;
   while(g--!=0)
   {
      val*=2;
   }
   return val;
}
int main()
{
   char bin[]="11011011";
   int len=strlen(bin);
   int val=0;
   int j=0;
   for(int i=(len-1);i>=0;i--)
   {
      val+=power(j)*(stoi(bin[i]));
      printf("$=%d\t val=%d\t j=%d\n",stoi(bin[i]),power(j),j);
      j++;
   }
   printf("$=%d\n",val);
  
    return 0;
}