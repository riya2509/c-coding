#include <stdio.h>
int main()
{
    int n1, n2, sum;
    int *c1, *c2;

    c1 = &n1; 
    c2 = &n2; 

    printf("Enter any two numbers: ");
    scanf("%d%d", c1, c2);

    sum = *c1 + *c2;

    printf("Sum = %d", sum);

    return 0;
}