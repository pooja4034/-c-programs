#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,Max=0,S_Max=0,iArr[10]={36,5,78,64,67,87,23,45,76,5};

    Max=iArr[0];

    for(i=1;i<10;i++)
    {
        if(Max<iArr[i])
        {
            Max=iArr[i];
        }
    }
    S_Max=iArr[0];

    for(i=1;i<10;i++)
    {
        if(iArr[i]==Max)
        {
            continue;
        }
        else if(S_Max<iArr[i])
        {
            S_Max=iArr[i];
        }
    }
    printf("\n_____________________________________________________________\n");

    printf("\n\tMaximum From Given Array is=%d",Max);
    printf("\n\t2nd Maximum From Given Array is=%d",S_Max);

    printf("\n_____________________________________________________________");

    getch();
    return 0;
}
