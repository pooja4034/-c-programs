#include<stdio.h>
struct stud
{
    int rn,en,hd,mar,total;
    float avg;
    char nm[12];

};
void main()
{
    int i;
    struct stud o[100];
    printf("Enter the student Details\n");

    for(i=0;i<3;i++)
    {
        scanf("%d%s%d%d%d",&o[i].rn,&o[i].nm,o[i].en,&o[i].hd,&o[i].mar);
        printf("rn=%d\nnm=%s\nen=%d\nhd=%d\nmar=%d",o[i].rn,o[i].nm,o[i].en,o[i].hd,o[i].mar);
        o[i].total=o[i].en+o[i].hd+o[i].mar;
        o[i].avg=o[i].total/3;
        printf("avg=%f",o[i].avg);
    }
    return 0;
}
