#include <stdio.h>
void MinMax(int arr[], int len, int *min, int *max)
{
    *min = *max = arr[0];
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
    int a[] = {2, 345, 67, 35345, 2355, 654, 3, 5, 6, 74, 76};
    /* int a[10], n;
    printf("Enter the number of array elements:");
    scanf("%d", &n);
    int j;
    for (j = 0; j < n; j++)

        printf("Enter the number %d:",j+1);
        scanf("%d",&a[j]);}*/
    int min, max;
    int len = sizeof(a) / (sizeof(a[0]));
    MinMax(a, len, &min, &max);
    printf("The smallest value of the array is %d\n", min);
    printf("The largest value of the array is %d", max);
}
