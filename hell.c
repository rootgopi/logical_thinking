#include<stdio.h>

int main()
{
  int n=11;
  n=n-2;
  char c[15]="hello";
  char d[6]="world";
  int z=0; int z1=4;
  int y=0;  int y1=4;
  char arr[3][10];
  for(int i=0;i<=2;i++)
  {
    for(int j=0;j<=n;j++)
    {

      if(i==j)
      {
        arr[i][j]=c[z++];
      }
      else if(i+j==4)
      {
         arr[i][j]=c[z1--];
      }
      else if(i+5==j)
        {
          arr[i][j]=d[y++];
        }
      else if(i+j==9)
      {
          arr[i][j]=d[y1--];
      }
      else
      {
        arr[i][j]=' ';
      }
  }
 
}
for(int i=0;i<3;i++)
{
  for(int j=0;j<10;j++)
  {
    printf(" ");
    printf("%c",arr[i][j]);
  }
  printf("\n");
}

return 0;

}
  
