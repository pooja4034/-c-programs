#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,v=0;
    char a[10];

    printf("Enter any string\n");
    gets(a);

    l=strlen(a);

    for(i=0;i<l;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            v++;
        }
    }
    printf("vowel=%d",v);
    return 0;
}
