#include <stdio.h>
void main(){
    int a, b, c;
    printf("Enter first integer\n");
    scanf("%d",&a);
    printf("Enter second integer\n");
    scanf("%d",&b);
    printf("Enter third integer\n");
    scanf("%d",&c);
    if(a>=b && a>=c)
    printf("The greatest integer is %d",a);
    else if (b>=c && b>=a)
    printf("The greatest integer is %d",b);
    else 
    printf("The greatest integer is %d",c);
}




