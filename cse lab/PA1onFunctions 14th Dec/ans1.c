#include <stdio.h>
void p();
void main()
{
p();
}
void p()
{
int a, b, m;
printf("Enter 2 Numbers : ");
scanf("%d %d", &a, &b);
m = a * b;
printf("the Product is : %d", m);
}