#include<stdio.h>
#include<conio.h>

int Sum_of_Numbers();

int main()
{
  printf("\nEnter Numbers to calculate there addition(Zero/-ve Number will stop Addition):");

  printf("\nAddition of given Numbers is=%d",Sum_of_Numbers());

  getch();
  return 0;
}
int Sum_of_Numbers()
{
    int i=0,Num=0,Sum=0;

    while(1)
    {
        printf("\nNumber %d=",++i);
        scanf("%d",&Num);

        if(Num<=0)
        {
            break;
        }
        Sum=Sum+Num;
    }
    return Sum;
}
