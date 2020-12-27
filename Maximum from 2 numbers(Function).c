#include<stdio.h>
#include<conio.h>

int main()
{
    int a=0,b=0;

    printf("\nEnter Two Number= ");
    scanf("%d%d",&a,&b);

    printf("\n_____________________________________________");

    printf("\nEntered number are=\ta=%d\tb=%d",a,b);

    if(a == b)
    {
        printf("\nNumbers are equal");
    }
    else if(a > b)
    {
        printf("\n\nMaximum number= %d",a);
    }
    else
    {
        printf("\nMaximum number= %d",b);
    }

    printf("\n_____________________________________________");


    getch();
    return 0;
}
