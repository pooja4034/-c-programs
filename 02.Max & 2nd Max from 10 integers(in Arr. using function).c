#include<stdio.h>
#include<conio.h>

void Frist_Max();
void Sec_Max();

 int i=0,Max=0,S_Max=0,iArr[10]={36,5,78,64,67,87,23,45,76,5};


int main()
{


    printf("\n_____________________________________________________________\n");
    Frist_Max();

    printf("\n\tMaximum From Given Array is=%d",Max);
    getch();

    Sec_Max();
    printf("\n\t2nd Maximum From Given Array is=%d",S_Max);

    printf("\n_____________________________________________________________");

    getch();
    return 0;
}
void Frist_Max()
{
    int i=0;

    Sec_Max=iArr[0];

    for(i=1;i<10;i++)
    {
        if(Max<iArr[i])
        {
            Max=iArr[i];
        }
    }
}
void Sec_Max()
{
       Max=iArr[0];
    S_Max=iArr[0];

    for(i=1;i<10;i++)
    {
        if(iArr[i]==iArr[i-1])
        {
            continue;
        }
        else if(Max<iArr[i])
        {
            S_Max=Max;
            Max=iArr[i];
        }
        else if((S_Max<iArr[i]||Max==S_Max)&&iArr[i]!=Max)
        {
            S_Max=iArr[i];
        }
}
