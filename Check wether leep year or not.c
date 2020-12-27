#include<stdio.h>
#include<conio.h>

int main()
{
    int year;

    printf("\n==================================================\n");

    printf("\n\t\tEnter the year: ");
    scanf("%d",&year);

    if(((year%4==0)&&(year%100!=0))||(year%400==0))
        printf("\t\t%d is a leep year",year);
    else
        printf("\t\t%d is not a leep year",year);

    printf("\n==================================================");

    getch();
    return 0;
}
