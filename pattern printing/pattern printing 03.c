#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0;
    char ch='A';

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
             printf("%c",ch);
        }
         ch++;
         printf("\n");
    }
    getch();
    return 0;

}
