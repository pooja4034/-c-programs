#include<stdio.h>

int main()
{
    int a[5],i,max=0;

    printf(" Enter array no\n");

    for(i=1;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("max=%d",max);
    return 0;
}
