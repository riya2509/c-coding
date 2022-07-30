/*4. Given an unsorted dynamic array of size n, WAP to find and display the number of
elements between two elements a and b (both inclusive). range [2&gt;= and &lt;=5]*/

#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, i, a, b, c = 0, d = 2, *p;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }
    printf("Enter lower limit element and upper limit element respectively:\n");
    scanf("%d %d", &a, &b);
    for (i = 0; i < n; i++)
    {
        if (p[i] == a || p[i] == b)
        {
            c++;
            d = 0;
        }
        else if (p[i] > a && p[i] < b)
            c++;
    }
    printf("The number of elements between %d and %d are, both inclusive : %d\n", a, b, c + d);
    free(p);
}
