#include<stdio.h>
void sum();
int main()
{
    int i;

    {
        sum();
    }
}
void sum()
{
    int i,sum=0;
    for(i=1;i<=10;i++)
    {
        sum=sum+i;
        printf("sum=%d\n",sum);
    }
}
