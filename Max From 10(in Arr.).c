#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,Max=0,iArr[10]={36,5,78,64,0,87,23,45,76,5};

    Max=iArr[0];

    for(i=1;i<10;i++)
    {
        if(Max<iArr[i])
        {
            Max=iArr[i];
        }
    }
    printf("\n_____________________________________________________________\n");

    printf("\n\tMaximum From Given Array is=%d",Max);

    printf("\n_____________________________________________________________");

    getch();
    return 0;
}
