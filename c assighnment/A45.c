#include<stdio.h>
#include<conio.h>
void main()
{
    int a[6],i;

    printf("Enter the array Elements");

    for(i=0;i<6;i=i+2)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<6;i++)
    {
        if(i%2==1)
        {
            a[i]=a[i-1]*a[i-1];
        }
        printf("%d\t",a[i]);
    }
    return 0;
}
