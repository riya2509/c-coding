#include <stdio.h>
void MinMax(int arr[], int len, int *min, int *max)
{
    *min=*max=arr[0];
    int i;
    for (i = 1; i < len; i++)
    {
        if (arr[i] < *min)
            *min = arr[i];
        if (arr[i] > *max)
            *max = arr[i];
    }
}

void main()
{
    int a[] = {1, 2143, 3465, 76645, 33, 55};
    int min, max;
    int len = sizeof(a) / (sizeof(a[0]));
    MinMax(a, len, &min, &max);
    printf("The smallest number in the array is %d", min);
    printf("The largest number of the array is %d", max);
}