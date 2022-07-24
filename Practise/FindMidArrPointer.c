#include <stdio.h>
void main(){
    int a[]={1,23,45,45,5345,4,5};
    int len=sizeof(a)/(sizeof(a[0]));
    int *mid=MidArray(a,len);
    printf("the mid of the array is : %d",*mid);
}

int *MidArray (int a[],int len){
    return &a[len/2];
}