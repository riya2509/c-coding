#include<stdio.h>
int sumAE();
int main()
{
//int array[] = {1,2,3,4,5,6,7};
int arr[10],i;
    for(i=0; i<10; i++)
    {
    printf("Enter the value for arr[%d] : ",i);
    scanf("%d", &arr[i]);
    }
int sum;
sum = sumAE(arr[10],6);
printf("\nSum of array elements is:%d",sum);
return 0;
}
int sumAE( int arr[], int n ) {
if (n < 0) {
return 0;
} else{
//Recursion: calling itself
return arr[n] + sumAE(arr, n-1);
}
}