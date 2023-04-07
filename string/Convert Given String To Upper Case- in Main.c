//Convert Given String To Upper Case

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[50]={'\0'};
    int i=0;

    printf("\nEnter a String: ");
    gets(cSrc);

    while(cSrc[i]!='\0')
    {
        if(cSrc[i]>='a'&&cSrc[i]<='z')
        {
            cSrc[i]=cSrc[i]-32;
        }
        i++;
    }
    printf("\nGiven String is after capitalization=%s");

    getch();
    return 0;
}
