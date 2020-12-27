#include<stdio.h>
#include<conio.h>

 void swap(int *,int *);
 int main()
 {
     int No1,No2;

     printf("\n\nEnter two numbers: ");
     scanf("%d%d",&No1,&No2);

     printf("\n_________________*******************_________________\n");

     printf("\nBefore swapping: No1= %d, No2= %d",No1,No2);

     swap(&No1,&No2);

     printf("\nAfter Swapping: NO1= %d, No2= %d\n",No1,No2);

     printf("\n_________________*******************_________________");


     return 0;
 }
 void swap(int *p,int *q)
 {
     int temp;
     temp = *p;
     *p=*q;
     *q=temp;
 }
