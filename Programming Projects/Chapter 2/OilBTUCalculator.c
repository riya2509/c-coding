#include <stdio.h>
void main(){
    double gallons,efficiency,energy,heat;
    printf("Enter the number of gallons of oil burned and the efficiency of the house's oil furnace\n");
    scanf("%lf\n%lf",&gallons,&efficiency);
    efficiency=(double)efficiency/100.0;
    energy=(5800000.0/42.0)*(double)gallons;
    heat=(double)(energy*efficiency);
    printf("The BTU's of heat delivered to the house is %0.2lf BTU",heat);
}