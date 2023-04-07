#include<stdio.h>
int main()
{
    FILE *p,*q;
    char ch;

    p=fopen("stud.txt","r");
    q=fopen("copy.txt","a");

    while(1)
    {
        ch=getch(p);

        if(ch==EOF)
            break;
        fputc(ch,q);
    }
    fclose(p);
    return 0;

}
