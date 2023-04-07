#include<stdio.h>
#include<conio.h>
int add(int,int);
int main()
{
    int a,b,c;

    printf("Enter the No\n");
    scanf("%d%d",&a,&b);

    c=add(a,b);
    printf("sum=%d",c);
}
int add()
{
    int c;
    c=a+b;
    return c;
}

