#include<stdio.h>
#include<conio.h>

int table();

int main()
{
    printf("\nTable");
    table();

    return 0;
}
int table()
{
    int sp=5,ep=10,i=0;
    while(sp<=ep)
    {
        i=1;

        while(i<=10)
        {
            printf("\n%d",i*sp);
            i++;
        }
        printf("\n");
        sp++;
    }
}
