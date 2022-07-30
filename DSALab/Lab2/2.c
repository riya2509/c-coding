//2. WAP to reverse the contents of a dynamic array of n elements.

#include <stdio.h>
#include <stdlib.h>
void main(){
    int *p,i,n;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    printf("Enter the elements:\n");
    for (i=0;i<n;i++){
    scanf("%d",&p[i]);
    }
printf("The array in reverse order is:\n");
for (i=n-1;i>=0;i--){
    printf("%d\n",p[i]);
}
free (p);
}