#include<stdio.h>
#include<conio.h>

int main()
{
    int No1=0,No2=0;

    up:

    printf("\nEnter integer number: ");
    scanf("%d%d",&No1,&No2);

    printf("\n=======================================");

    if(No1==No2)
    {
        printf("Numbers are equal");
        goto up;
    }

    (No1>No2)?printf("\n%d is Maximum",No1):
              printf("\n%d is maximum",No2);

     printf("\n=======================================");


     getch();
     return 0;
}
