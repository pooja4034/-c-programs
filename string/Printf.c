#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char cSrc[20]="";

    printf("Enter Your Name= ");
    gets(cSrc);

    system("cls");

    printf("\n String Length is= %d",printf("%s",cSrc));

    getch();
    return 0;
}
