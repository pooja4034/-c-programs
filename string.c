#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char cSrc[10]={'\0'};
    int SmallCnt=0,CapCnt=0,DigCnt=0,SplCnt=0;
    int i=0;

    printf("\nPassword Must contain \nAtleast 1 Small letter,1 capital letters,1 digit & 1 special character");
    printf("\nAnd password length should be minimum 10 characters");
    SmallCnt=CapCnt=DigCnt=SplCnt=0;

    printf("\nEnter your password=");
    gets(cSrc);

    while(cSrc[i]!='\0')
    {
        if(cSrc[i]>='a'&&cSrc[i]<='z')
        {
            SmallCnt++;
        }
        else if(cSrc[i]>='A'&&cSrc[i]<='Z')
        {
            CapCnt++;
        }
        else if(cSrc[i]>='0'&&cSrc[i]<='9')
        {
            DigCnt++;
        }
        else
        {
            SplCnt++;
        }
        i++;
    }

    printf("\nSmall letters=%d",SmallCnt);
    printf("\nCapital letters=%d",CapCnt);
    printf("\nDigits=%d",DigCnt);
    printf("\nSpecial symbol=%d",SplCnt);
    getch();
    return 0;d
}
