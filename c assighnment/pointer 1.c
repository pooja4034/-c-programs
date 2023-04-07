#include<stdio.h>
int main()
{
    int a=10;
    int *p;

    p=&a;

    printf("add of a%u\n",p);
    printf("value a%d\n",*p);
}
