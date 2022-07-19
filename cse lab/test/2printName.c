#include <stdio.h>
void main(){
    int n, count=1;
    char name [10];
    printf("Enter the number of times the name should be printed\n");
    scanf("%d",&n);
    printf("Enter your name\n");
    scanf("%s",name);
    while(count<=n){
        printf("\n");
        printf(name);
        count++;
    }
}