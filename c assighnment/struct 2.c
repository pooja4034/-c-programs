#include<stdio.h>
struct stud
{
    int ro,mar;
    char nm[10];
};
int main()
{
    struct stud o,m;
    printf("Enter stud Details\n");
    scanf("%d%s%d",&o.ro,&o.nm,&o.mar);
    scanf("%d%s%d",&m.ro,&m.nm,&m.mar);
    printf("roll no=%d\nname=%s\nmarks=%d\n",o.ro,o.nm,o.mar);
    printf("roll no=%d\nname=%s\nmarks=%d",m.ro,m.nm,m.mar);
}
