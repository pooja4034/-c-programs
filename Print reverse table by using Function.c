#include<stdio.h>
#include<conio.h>
void reverse_table(int);

int main()
{
    int no=0;

    printf("\nEnter no for given table is= ");
    scanf("%d",&no);

    reverse_table(no);

    return 0;

}
void reverse_table(int no)
{
    int i=0;

    for(i=10;i>=1;i--)
    {
        printf("\n%d",no*i);
    }
}
