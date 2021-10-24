#include <stdio.h>
void main(){
    double v, s, a, t;
    printf("Enter the jet’s takeoff speed in km/hr\n");
    scanf("%lf", &v);
    printf("Enter the distance in meters over which the catapult accelerates the jet from rest to takeoff\n");
    scanf("%lf" , &s);
    v=(5.0/18.0)*v;
    t=(2*s)/v;
    a=v/t;
    printf("The acceleration in of a jet fighter launched from an aircraft-carrier catapult is %0.2lf m/sec and the time for the fighter to be accelerated to takeoff speed is %0.2lf secs",a,t);
    }