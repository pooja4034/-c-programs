#include<stdio.h>
struct stud
{
    int ro,mar;
    char nm[10];
};
int main()
{
    struct stud o;
    printf("Enter stud Details\n");
    scanf("%d%s%d",&o.ro,&o.nm,&o.mar);
    printf("roll no=%d\nname=%s\nmarks=%d",o.ro,o.nm,o.mar);
}
