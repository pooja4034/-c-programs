#include<string.h>
#include<stdio.h>
int main()
{
    char a[10];

    printf("Enter the string\n");

    gets(a);
    puts(a);
    strupr(a);
    printf("%s\n",a);

    return 0;
}
