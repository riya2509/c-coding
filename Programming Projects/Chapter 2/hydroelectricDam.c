#include <stdio.h>
#include <math.h>
#define G 9.80;
#define EFFECIENCY 90/100;
void main(){
    int h,w;
    double ccm,p;
    printf("Enter the height of the dam and the the number of cubic meters of water that are projected to flow from the top to the bottom of the dam each second ");
    scanf("%d%lf",&h,&ccm);
    w=(double)(ccm*1000)*h*G;
    w=w*EFFECIENCY;
    p=w/pow(10,6);
    printf("%0.2lf MW of power will be produced if 90%% of the work done on the water by gravity is converted to electrical energy",p);
    }
