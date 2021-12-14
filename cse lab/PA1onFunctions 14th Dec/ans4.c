#include <stdio.h>
float product(float a, int b);
void main()
{
    int b=0;
    float a, p=0;
    printf("Enter a : ");
    scanf("%f", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    p=product(a, b);
    printf("\nProduct = %f", p);
}
float product(float a, int b)
{
    float p=0;
    p = (float)a*b;
    return p;
}