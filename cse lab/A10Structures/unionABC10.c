#include<stdio.h>

union ABC{
    char a;
    int b;
    double c;
}u;

int main()
{
u.a='A';
u.b=1088;
u.c=10.5;

printf("\nThe value of a is %c\n",u.a);
printf("\nThe value of b is %d\n",u.b);
printf("\nThe value of c is %lf\n",u.c);

printf("\nEnter the  value of a, b and c respectively\n");
scanf(" %c %d %lf", &u.a, &u.b, &u.c);

printf("\nThe value of a is %c\n",u.a);
printf("\nThe value of b is %d\n",u.b);
printf("\nThe value of c is %lf\n",u.c);

return 0;
}