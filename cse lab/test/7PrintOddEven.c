#include<stdio.h>
void main(){
        int n,r,i;
    printf("Enter the number for the range: ");
    scanf("%d",&n); //received the number for n
    printf("\nDisplay the even numbers in the range %d : ",n);
    for(i=1; i<=n; i++){
        r=i%2;
        if(r==0)
            printf("\n %d",i);
    }
    printf("\nDisplay the odd numbers in the range %d : ",n);
    for(i=1; i<=n; i++){
        r=i%2;
        if(r==1)
            printf("\n %d",i);
    }
}