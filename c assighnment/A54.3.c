#include<stdio.h> //with arg no return
float area(float);
int main()
{
    float r;
    printf("Enter the Number\n");
    scanf("%f",&r);
    area(r);
}
float area(float r)
{
    float a;
    a=3.14*r*r;
    printf("a=%f",a);


}
