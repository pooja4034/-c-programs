#include<stdio.h> //with arg with return
float area(float);
int main()
{
    float r,a;

    printf("Enter the Number\n");
    scanf("%f",&r);

    a=area(r);
    printf("area=%f",a);
}
float area(float r)
{
    float ar;
    ar=3.14*r*r;

    return ar;

}
