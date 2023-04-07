#include<stdio.h>
void array();
int main()
{
    array();
}
void array()
{
    int i,a[10];
    printf("array elements\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array elements\n");

    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
}

