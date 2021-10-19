#include <stdio.h>

void main(){
    int farenheit;
    double celsius;
    printf("Enter temperature in farenheit\n");
    scanf("%d",&farenheit);
    celsius = ((5.0/9.0)*(farenheit-32));
    printf("Tempertaure in celsius is %0.2lf @C",celsius);
}