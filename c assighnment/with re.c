#include<stdio.h>
#include<conio.h>
int add();
int main()
{
    int s;
    s=add();

    printf("sum=%d",s);

}
int add()
{
    int a,b,sum;
    printf("Enter Number\n");
    scanf("%d%d",&a,&b);
    sum=a+b;

    return sum;
}
