#include<stdio.h>
#include<stdlib.h>
 
 int main()
 {
   int in[5]={1,2,3,4};
   char op[5]={'*','*','+'};
   int i=0;
    int dum=in[0];
   while(i<3)
   {
     switch(op[i])
     {
       case '*':
       {
         dum=dum*in[i+1];
         break;
       }
       case '+':
       {
         dum=dum+in[i+1];
         break;
       }

     }
     i++;
   }

   printf("$dum=%d\n",dum);
   return 0;
 }
