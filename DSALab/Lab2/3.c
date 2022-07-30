//3. WAP to search an element in a dynamic array of n numbers.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p, i, n, key;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }
    printf("Enter the key:\n");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (p[i] == key)
        {
            printf("Element found\n");
            return 0;
        }
    }
    printf("Element not found\n");
    free(p);
}