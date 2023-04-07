#include<stdio.h>
struct stud
{
  char name[20];
  int rn,mr;
};
int main()
{
    struct stud *o,p;


    o = &p;

    printf("Enter the roll no:\n");
    scanf("%d",&o->rn);

    printf("Enter the name:\n");
    scanf("%s",&o->name);

    printf("Enter the marks:\n\n");
    scanf("%d",&o->mr);


    printf("roll no=%d\n",o->rn);
    printf("name=%s\n",o->name);
    printf("marks=%d\n",o->mr);
    return 0;

}
