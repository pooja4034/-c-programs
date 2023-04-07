#include<stdio.h>
#include<conio.h>

int str_is_Palindrome(char*);

int main()
{
    char cSrc[20]="";
    int Res=0;

    printf("\nEnter a string:");
    gets(cSrc);

    Res=str_is_Palindrome(cSrc);

    if(Res==1)
    {
        printf("\nGiven String is Palindrome.");
    }
    else
    {
        printf("\nGiven String is not Palindrome.");
    }

    getch();
    return 0;
}
int str_is_Palindrome(char*Str)
{
    int i=0,j=0;

    while(Str[j]!='\0')
    {
        j++;
    }
    j=j-1;

    while(i<j)
    {
        if(Str[i]!=Str[j])
        {
            break;
        }
        i++;
        j--;
    }
    if(i>=j)
    {
        return 1;
    }

    return 0;
}
