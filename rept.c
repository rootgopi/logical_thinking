#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
     char c[]="bentennission";
    int set[256];
    for(int i=0;i<256;i++)
       set[i]=0;
    int j=0;
    while(c[j]!='\0')
    {
        if(set[c[j]]==0)
          set[c[j]]=j;
        else
        {
            int d=set[c[j]];
            c[d]='#';
            set[c[j]]=0;
            c[j]='#';
        }
       j++;      
    }
    j=0;
while(c[j]!=0)
{
    if(c[j]!='#')
     printf("%c",c[j]);
    j++;
}
    printf("\n$$$=%s\n",c);
}
