#include <stdio.h>
void main(){
    char name [10];
    int count=1;
    printf("Enter your name\n");
    scanf("%s",name);
    while(count<=5){
        printf("\n");
        printf(name);
        count++;
    }
    
}
