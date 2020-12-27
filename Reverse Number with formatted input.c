#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Temp=0,Rev=0,Dig=0;

    printf("\n\tEnter to find it Reverse: ");
    scanf("%d",&No);

    printf("========================================================");

    Temp=No;

    while(Temp!=0)
    {
        Dig= Temp % 10;
        Rev= (Rev * 10)+Dig;
        printf("\n\tDigit= %d.\tRev= %d.Temp= %d.",Dig,Rev,Temp);
        Temp= Temp /10;
    }

    printf("\n\n\tReverse of %d=%d",No,Rev);

    printf("\n=========================================================");

    getch();
    return 0;
}
