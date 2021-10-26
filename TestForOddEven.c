#include <stdio.h>
void main(){
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if (a%2==0 || a==0)
    printf("%d is EVEN",a);
    else 
    printf("%d is ODD",a);

}