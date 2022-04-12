#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int findsubstring(char *a,char *b)
{
  int stln=strlen(a);
  int st1ln=strlen(b);
  int count=st1ln;
  for(int i=0;i<stln;i++)
  {
    for(int j=0;j<st1ln;j++)
    {
      if(a[i]==b[j])
        {
          count--;
          if(count==0)
             return 1;
            i++;
        }
        else
        {
        count=st1ln;
        break;
        }

    }
    
  }
 return 0;
}
 int main()
 {
   char str[]="geekforgeeks";
   char str1[]="geek";

   if((findsubstring(str,str1)))
     puts("sub string is present");
    else
     puts("not present");
  
  return 0;

 }


 
