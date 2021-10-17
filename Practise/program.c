#include <stdio.h>
void main()
{
    int m;
    int n;
    printf("Enter two integers> ");
    scanf("%d%d", &m, &n);
    m = m + 5;
    n = n * 3;
    printf("m=%d\nn=%d\n", m, n);
}