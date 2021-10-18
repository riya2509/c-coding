#include <stdio.h>
void main(){
    double t, temp,minutes;
    int flag,hours ;
    printf("Enter how long it has been since the start of the power failure in whole hours and minutes ");
    scanf("%lf",&t);
    flag=(int)t%100;
    minutes=(double)flag/60;
    hours=(int)t/100;
    t=(hours+minutes);
    temp=((4*t*t)/(t+2))-20;
    printf(" The estimated temperature in a freezer (in °C) given the elapsed time of %0.2lf hours since a power failure is %0.2lf @C",t,temp);    
}