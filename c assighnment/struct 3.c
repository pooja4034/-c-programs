#include<stdio.h>
struct stud
{
    int ro,mar;
    char nm[10];
};
int main()
{
    int i;
    struct stud o[100];
    printf("Enter stud Details\n");

    for(i=0;i<3;i++)
    {
       scanf("%d%s%d",&o[i].ro,&o[i].nm,&o[i].mar);
       printf("roll no=%d\nname=%s\nmarks=%d\n",o[i].ro,o[i].nm,o[i].mar);
    }

}
