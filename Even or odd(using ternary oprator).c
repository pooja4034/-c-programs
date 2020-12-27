#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0;

    printf("\n----------------------------------------------");

    printf("\nEnter number to check Even or Odd number: ");
    scanf("%d",&No);

    printf("\n---------------------------------------------");

    if(No<=0)
    {
        printf("\nInvalid Input");
        goto down;
    }

    printf("\n%d is %s",No,(No%2==0)?"Even":"Odd");

    down:

    printf("\n----------------------------------------------");


        getch();
        return 0;
}
