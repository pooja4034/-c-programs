#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",'A'-1+i);
        }
        printf("\n");
    }
    return 0;
}
