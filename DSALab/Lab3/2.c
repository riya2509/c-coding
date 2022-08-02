#include<stdio.h>
 
// Function to swap *a and *b 
void swap(int *a, int *b);
 
void segregateEvenOdd(int arr[], int size)
{
    /* Initializing left and right indexes */
    int left = 0, right = size-1;
    while (left < right)
    {
        /* Incrementing left index while  0 at left */
        while (arr[left]%2 == 0 && left < right)
            left++;
 
        /* Decrementing right index while  1 at right */
        while (arr[right]%2 == 1 && left < right)
            right--;
 
        if (left < right)
        {
            /* Swaping arr[left] and arr[right]*/
            swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }
}
 
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
int main()
{
    int arr[] = {12, 34, 45, 9, 8, 90, 3};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
 
    segregateEvenOdd(arr, arr_size);
 
    printf("Array after segregation ");
    for (i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
 
    return 0;
}