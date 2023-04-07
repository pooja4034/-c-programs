#include<stdio.h>
#include<conio.h>

 int main()
 {
     char cSrc[50]={'\0'};
     char cDest[50]={};
     int i=0;

     puts("\n Enter a String: ");
     gets(cSrc);

     while(cSrc[i]!='\0')
     {
         cDest[i]=cSrc[i];
         i++;
     }

     printf("\n Given String is= %s!!!",cSrc);
     printf("\n Copied to New String is= %s $$$",cDest);

     getch();
     return 0;
 }
