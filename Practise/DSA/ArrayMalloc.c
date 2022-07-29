#include<stdio.h>
#include<stdlib.h>
void main(){
    int n, *p;
    printf("Enter the number of elements in the array :");
    scanf("%d",&n);
    p= (int *)malloc(n*sizeof(int));
    printf("Enter the elements of the array:"); 
    for (int i=0; i<n; i++)
    scanf("%d",&p[i]);
    printf("The elements of the array are :");
    for (int i=0; i<n; i++)
    printf ("%d",p[i]);
    free(p);
}