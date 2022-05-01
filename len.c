#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int arr[10];
void push(int x)
{
    int static c=0;
    printf("#=%d\n",arr[c++]=x);  
}
int main()
{
     char c[]="babgbag";
     int clen=strlen(c);
     char s[]="bag";
     int slen=strlen(s);
     int count=0;
      int i=0,j=0;
     while(s[j]!='\0' && c[i]!='\0')
     {
         if(s[j]==c[i])
         {
             push(i);
             count++;
             j++;
         }
         i++;
     }
    printf("count=%d\n",count);
     if(count==slen)
          puts("substring is present");
     else
       puts("not found");
    
    for(int i=0;i<5;i++)
    {
        printf("val=%d\n",arr[i]);
    }


}