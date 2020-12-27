#include<stdio.h>
#include<conio.h>

int Addition(int,int);

int main()
{
    int No1=0,No2=0,Sum=0;

    printf("\nEnter Two Numbers FOr Addition= ");
    scanf("%d%d",&No1,&No2);

    Sum=Addition(No1,No2);

    printf("\nAddition of %d & %d",No1,No2,Sum);

    getch();
    return 0;
}
int Addition(int N1,int N2)
{
    int Res=0;

    Res=N1+N2;

    return Res;
}
