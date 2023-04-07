#include<stdio.h>
#include<conio.h>
int add(int,int);
int main()
{
    int a,b;

    printf("Enter Number\n");
    scanf("%d%d",&a,&b);
    add(a,b);


}
int add(int a,int b)
{
    int sum;
    sum=a+b;
    printf("sum=%d\n",sum);
    return 0;
}
