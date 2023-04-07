#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10];

    printf("Enter any String\n");

    gets(a);
    strcpy(a,b);
    strrev(a);

    if(strcmp(a,b)==0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("not palindrome");
    }
    return 0;

}
