#include<stdio.h>
#include<string.h>
int main()
{
    int l;
    char a[10];

    printf("Enter string\n");

    gets(a);
    puts(a);

    strlen(a);
    l=strlen(a);

    printf("%d\n",l);
    return 0;

}
