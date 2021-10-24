#include <stdio.h>
void main(){
    double x1, y1, x2, y2, slope, midpointx, midpointy, slopePB, YofPB;
    printf("Give coordinates of two points: [] []\n");
    scanf("%lf%lf", &x1, &y1);
    scanf("%lf%lf", &x2, &y2);
    slope=(double)(y2-y1)/(double)(x2-x1);
    midpointx= (double)(x1+x2)/2.0;
    midpointy= (double)(y1+y2)/2.0;
    slopePB=-1.0/slope;
    YofPB=midpointy-(slopePB*midpointx);
    printf("The original two points are [%0.2lf,%0.2lf] & [%0.2lf,%0.2lf]\n",x1, y1, x2, y2);
    printf("The equation of the perpendicular bisector is\n y=%0.2lfx+%0.2lf", slopePB, YofPB);
}