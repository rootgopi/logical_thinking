
#include<stdio.h>
#include<stdlib.h>
 
 int main()
 {
   int in[10]={1,2,3,4,2,3};
   int len=6;
   char op[7]={'+','+','+','/','+'};
   int i=0;
    int dum=in[0];
   while(i<(len-1))
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
       case '-':
       {
         dum=dum-in[i+1];
         break;
       }
       case '/':
       {
         dum=dum/in[i+1];
         break;
       }

     }
     i++;
   }

   printf("$dum=%d\n",dum);
   return 0;
 }
