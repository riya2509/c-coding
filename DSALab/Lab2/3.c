#include <stdio.h>
int main()
{
    int a[20], n, i,key;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    printf("Enter the elements in the array");
    for (i= 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the key:");
    scanf("%d",&key);

    for (i= 0; i < n; i++){
        if(a[i]==key){
        printf("Element found");
        return 0;
        }
    }
    printf("Element not found");
}