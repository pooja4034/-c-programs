#include<stdio.h>
int main()
{
    int a[2],b[2],c[2],i=0;

    printf("Enter Array Elements");

    for(i=0;i<2;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter array elements\n");

    for(i=0;i<2;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Add of 1d array elements\n");
    for(i=0;i<2;i++)
    {
        c[i]=a[i]+b[i];
        printf("%d\t",c[i]);
    }
    return 0;
}
