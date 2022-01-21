#include<stdio.h>

union ABC{
    char a;
    int b;
}u;

int main()
{
u.a='A';
u.b=1088;

printf("\nThe value of a is %c\n",u.a);
printf("\nThe value of b is %d\n",u.b);

printf("\nEnter the  value of a and b respectively\n");
scanf(" %c%d", &u.a, &u.b);

printf("\nThe value of a is %c\n",u.a);
printf("\nThe value of b is %d\n",u.b);

return 0;
}