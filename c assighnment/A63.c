#include<stdio.h>
int main()
{
    FILE *p,*q;
    char ch;
    p=fopen("stud.txt","p");
    q=fopen("data.txt","q");

    while(1)
    {
        ch=getc(p);

        if(ch==EOF)
          break;
          fputc(ch,q);
    }
    fclose(p);
}
