#include<stdio.h> // include stdio.h library
#define MAX 5
void bubble_sort(int arr[]); // function declaration

int main(void)
{        
    int arr[MAX]; 

    // input array
    for(int i = 0; i < MAX; i++)
    {
        printf("arr[%d] = ", i);    
        scanf("%d", &arr[i]);
    }

    printf("\nUnsorted array: \n");

    // print unsorted array
    for(int i = 0; i < MAX; i++)
    {
        printf("%d ", arr[i]);    
    }

    // sort array
    bubble_sort(arr);

    printf("\n\nSorted array: \n");

    // print sorted array
    for(int i = 0; i < MAX; i++)
    {
        printf("%d ", arr[i]);    
    }

    return 0; // return 0 to operating system
}

/*
 *  bubble_sort() takes an array and sorts it
 *  in the ascending order
 */

void bubble_sort(int arr[])
{
    int tmp,  // temporary variable to hold one of the values while swapping
        is_swapped; // variable to indicate whether we have made any swaps during the passthrough

    for(int i = 0; i < MAX; i++)
    {
        // re-initialize is_swapped to 0 after every passthrough       
        is_swapped = 0;  

        for(int j = 0; j < MAX - 1 - i; j++)
        {            
            if(arr[j] > arr[j+1]) // compare adjacent elements
            {
                // swap adjacent elements
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;

                // set is_swapped to 1, to indicate
                // that we have made at least one 
                // swap during the passthrough
                is_swapped = 1;               
            }     
        }        

        // if no swaps are made in the last passthrough,
        // exit the outer for loop

        if (!is_swapped)
        {
            break;
        }
    }        
}