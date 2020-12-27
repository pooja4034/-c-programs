#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0, Sum= 0;
    printf("\nEnter number for Addition");
    printf("\n {To stop enter zero or negative input}\n");

    while(1)
    {
        printf("\n\tEnter Number =");
        scanf("%d",&No);

        if(No<=0)
        {
            break;
        }

        Sum = Sum + No;
    }

    printf("\n\nAddition of Given Numbers is = %d.",Sum);

    getch();
    return 0;
}
