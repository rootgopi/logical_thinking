#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int stoih(char *s)
{
  int dum=0;
  char temp[3]={s[0],s[1],'\0'};
  return atoi(temp);
  
}
int stoim(char *p)
{
  char temp[3]={p[3],p[4],'\0'};
  return atoi(temp);
}
char retflag(char *r)
{
    return r[5];
}

int main()
{
    char str[8]="08.30am";
    char str1[8]="11.45pm";
    int count=0;
    int start=stoih(str);
    printf("start=%d\n",start);
    int end=stoih(str1);
    printf("end=%d\n",end);
    int smin=stoim(str);
    int emin=stoim(str1);
    char sflag=retflag(str);
    char eflag=retflag(str1);
    printf("sflag=%c\teflag=%c\n",sflag,eflag);
    char flag=sflag;
    for(start;(!(start==end && flag==eflag));start++)
    {
        if(start==12)
        {
          start=0;
         if(flag=='p')
           flag=='a';
         if(flag=='a')
           flag='p';
          
        }
      count++;

    }
     count=count*60;
    printf("$=%d\n",count+smin+emin);
    return 0;
}