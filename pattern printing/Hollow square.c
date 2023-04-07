#include<stdio.h>
#include<conio.h>
int main()
{
    int r=5,c=4,i=0,j=0;

      for(i=1;c<=r;i++)
      {
          for(j=1;j<=c;j++)
          {
              if(i==1||j==1||i==r||j==c)
              {
                   printf(" * \t");
              }
              else
              {
                  printf("  \t");
              }
          }
          printf("\n");

      }
      getch();
      return 0;


}
