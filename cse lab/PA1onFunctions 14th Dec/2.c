#include <stdio.h>
float fn();
void main()
{
    float p1;
    p1=fn();
    printf("the product: %f",p1);
}
float fn()
{
    float a,b,p;
    printf("enter 2 no.: ");
    scanf("%f%f",&a,&b);
    p=a*b;
    return p;
}