#include<stdio.h>
#include<conio.h>
int square();
int main
{
    square();

}
int square()
{
    int i,sq;
    for(i=1;i<=10;i++)
    {
        sq=i*i;
        printf("%d\n",sq);
    }
    return 0;
}
