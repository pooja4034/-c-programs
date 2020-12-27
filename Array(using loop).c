#include<stdio.h>
#include<conio.h>

int main()
{
    int row=0,col=0,arr[3][5]={{11,12,13,14,15},{77,88,99,111},{23,33,43}};

    for(row=0;row<3;row++)
    {
        printf("\n\tRow%dElement are= \n",row);

        for(col=0;col<5;col++)
        {
            printf("\nValue of %d%d Element =%d.",row,col,arr[row][col]);
        }

    }

    getch();
    return 0;
}
