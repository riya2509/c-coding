#include <stdio.h>
void main(){
    int lengthyard, widthyard, lengthhouse, widthhouse,areayard, areahouse, areagrass;
    double time;
    printf("Enter the length and width of the yard\n");
    scanf("%d\n%d", &lengthyard ,&widthyard);
    printf("Enter the length and width of the house\n");
    scanf("%d\n%d", &lengthhouse ,&widthhouse);
    areayard=lengthyard*widthyard;
    areahouse=lengthhouse*widthhouse;
    areagrass=areahouse*areayard;
    time=(double)(areagrass*2)/60;
    printf("The time required to cut the grass at the rate of two square feet a second is %0.2lf mins",time);
}