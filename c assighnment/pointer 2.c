#include<stdio.h>
int main()
{
    int a=10,b=20,c;
    int *p,*q;

    p=&a;
    q=&b;

    printf("add of a=%u\n",p);
    printf("value a=%d\n",*p);
    printf("add if b=%u\n",q);
    printf("value b=%u\n",*q);

    c=*q+*p;
    printf("add=%d",c);
    return 0;
}
