#include<stdio.h>
#include<conio.h>

int main()
{
    int val=12;
    int *iptr=&val;
    int **pptr=&iptr;

    printf("Value is %d\n",val);
    printf("\nValue by dereferencing iptr is %d\n",*iptr);
    printf("\nValue by dereferencing pptr is %d\n",**pptr);
    printf("\nValue of iptr is %p\n",iptr);
    printf("\nValue of pptr is %p\n",pptr);

    getch();
    return 0;
}
