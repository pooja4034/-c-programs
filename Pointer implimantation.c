#include<stdio.h>
#include<stdio.h>

int main()
{
    int iNo=21,iNum=22;
    int *iPtr1=&iNo;
    int *iPtr2=&iNum;

    printf("\nValue of iNo = %d",iNo);
    printf("\nAddress of iNo = %d",&iNo);

    getch();
    printf("\nValue of iNo using its Pointer iPtr1 = %d",*iPtr1);
    printf("\nAddress of iNo using iPtr1 = %d",iPtr1);
    printf("\nAddress of iPtr1 = %d",&iPtr1);

    getch();
    printf("\nValue of iNum = %d",iNum);
    printf("\nAddress of iNum = %d",&iNum);
    getch();

    printf("\nValue of iNum using its Pointer iPtr2 = %d",*iPtr2);
    printf("\nAddress of iNum using iPtr2 = %d",iPtr2);
    printf("\nAddress of iPtr2 = %d",&iPtr2);

    getch();
    return 0;
}
