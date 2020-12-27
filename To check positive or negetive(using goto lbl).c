#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0;

    printf("\nEnter a number: ");
    scanf("%d",&No);

    if(No==0)
    {
        printf("\nInvalid");
        goto lbl;
    }
    printf("\n###############################");

    (No>0)?printf("\n%d is positive number"):
           printf("\n%d is negative number");

    printf("\n###############################");

     lbl:

     getch();
     return 0;
}
