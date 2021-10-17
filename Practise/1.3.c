#include <stdio.h>
void main(){
    double side,area;
    printf("Enter the side of a square in cms\n");
    scanf("%lf", &side);
    area=side*side;
    printf ("The area of a square whose side length is ___%lf",side);
    printf("___ cm is ___%lf",area);
    printf("___ square cm.");
}