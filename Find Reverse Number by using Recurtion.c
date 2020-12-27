#include<stdio.h>
#include<conio.h>

void reverse_no(int no);

int main(void)
{
    int no=0;

    printf("\nEnter a number: ");
    scanf("%d",&no);

    reverse_no(no);

    return 0;

}
void reverse_no(int no)
{
    int Dig=0;

    if(no==0)
    {
        return 0;
    }
    else
    {
        Dig=no%10;
        printf("%d",Dig);
        reverse_no(no/10);
    }
}
