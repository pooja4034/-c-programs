//no argument no return
#include<stdio.h>
#include<conio.h>
int add();               //declera
int main()

{


    add();     //calling

}
int add()  //define
{


    int a,b,sum;

    printf("Enter Number\n");
    scanf("%d%d",&a,&b);

    sum=a+b;

    printf("sum=%d\n",sum);

    return 0;



}
