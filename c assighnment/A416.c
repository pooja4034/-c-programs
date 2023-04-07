#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];

    printf("Enter the string\n");

    gets(a);
    puts(a);

    strrev(a);
    printf("%s\n",a);

    return 0;
}
