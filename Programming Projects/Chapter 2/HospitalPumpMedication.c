#include <stdio.h>
void main(){
    int volume,minutes;
    double time,flow;
    printf("Volume to be infused (ml) => ");
    scanf("%d", &volume);
    printf("Minutes over which to infuse => ");
    scanf("%d", &minutes);
    time= (double)minutes/60.0;
    flow=(double)volume/time;
    printf("VTBI: %d ml\nRate: %0.2lf ml/hr",volume,flow);
}