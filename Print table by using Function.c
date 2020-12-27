#include<stdio.h>
#include<conio.h>
void table(int);

int main()
{
    int no=0;

    printf("\nEnter no for given table is= ");
    scanf("%d",&no);

    table(no);

    return 0;

}
void table(int no)
{
    int i=0;

    for(i=1;i<=10;i++)
    {
        printf("\n%d",no*i);
    }
}
