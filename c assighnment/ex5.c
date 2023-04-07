#include<stdio.h>
float area(float);
int main()
{
    int r,a;

    printf("Enter number\n");
    scanf("%f",&r);
    a=area(r);
    printf("area=%f",a);
}
float area(float r)
{
    float a;

    a=3.14*r*r;
    return a;
}
