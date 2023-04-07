#include<stdio.h>
float area();
int main()
{
    float a;

    a=area();
    printf("area=%f",a);

}
float area()
{
    float r,ar;
    printf("Enter Number\n");
    scanf("%f",&r);
    ar=3.14*r*r;
    return ar;
}
