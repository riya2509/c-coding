#include <stdio.h>
void main(){
    int a, b, big;
    printf("Enter two integers\n");
    scanf("%d%d",&a,&b);
    big=(a>b)?(a):(b);
    printf("Biggest between %d & %d is %d",a,b,big);
}