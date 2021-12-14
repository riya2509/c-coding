#include <stdio.h>
void p_n();
void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    p_n(n);
}
void p_n(int n)
{
    if(n>=0)
    printf("%d is a positive number", n);
    else
    printf("%d is a negative number", n);
}