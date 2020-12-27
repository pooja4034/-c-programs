#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[3][5]={(11,12,13,14,15),(77,88,99,111),(23,33,43)};

    printf("\nRow 0 Elements are=\n");

    printf("\nValue of00 Element=%d.",arr[0][0]);
    printf("\nValue of01 Element=%d.",arr[0][1]);
    printf("\nValue of02 Element=%d.",arr[0][2]);
    printf("\nValue of03 Element=%d.",arr[0][3]);
    printf("\nValue of04 Element=%d.",arr[0][4]);

    printf("\n\nRow 1 Element are=\n");

    printf("\nvalue of10 Element=%d.",arr[1][0]);
    printf("\nvalue of11 Element=%d.",arr[1][1]);
    printf("\nvalue of12 Element=%d.",arr[1][2]);
    printf("\nvalue of13 Element=%d.",arr[1][3]);
    printf("\nValue of14 Element=%d.",arr[1][4]);

    printf("\n\nRow 2 Element are=\n");

    printf("\nValue of20 Element=%d.",arr[2][0]);
    printf("\nvalue of21 Element=%d.",arr[2][1]);
    printf("\nValue of22 Element=%d.",arr[2][2]);
    printf("\nValue of23 Element=%d.",arr[2][3]);
    printf("\nValue of24 Element=%d.",arr[2][4]);

    getch();
    return 0;
}
