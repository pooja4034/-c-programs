#include<stdio.h>
#include<conio.h>
int main()
{
    printf("\n==============================================\n");

     int r=5,c=4,i=0,j=0;


    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf(" * \t");
        }
        printf("\n");
    }

    printf("\n==============================================");

    getch();
    return 0;
}


