//13 Convert Given String TO Toggle Case
//Means- Convert Lower Case Latter To Upper Case & Convert Upper Case Latter To Lower Case

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[50]={'\0'};
    int i=0;

    printf("\n Enter a String: ");
    gets(cSrc);

    while(cSrc[i]!='\0')
    {
        if(cSrc[i]>='A'&&cSrc[i]<='Z')
        {
            cSrc[i]=cSrc[i]+32;
        }
        else if(cSrc[i]>='a'&&cSrc[i]<='z')
        {
            cSrc[i]=cSrc[i]-32;
        }
        i++;
    }

    printf("\nGiven String is After Toggled Case= %s",cSrc);

    getch();
    return 0;
}

