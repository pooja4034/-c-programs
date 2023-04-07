#include<stdio.h> //no arg no return
float area();
int main()
{
    area();
}
float area()
{
    float r,a;
    printf("Enter the Number\n");
    scanf("%f",&r);

    a=3.14*r*r;

    printf("area=%f\n",a);
}
