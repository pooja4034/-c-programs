#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,i=0;

    up:
        printf("\nEnter Integer number: ");
        scanf("%d",&No);
        printf("\n****************************************");

        if(No<=0)
        {
            printf("\nEnter positive number\n");
            goto up;
        }

        printf("\nFactors of %d : ",No);

        for(i=1;i<=No;i++)
        {
            if(No%i==0)
            {
                printf("\t%d",i);
            }
        }

        printf("\n****************************************");

        getch();
        return 0;
}
