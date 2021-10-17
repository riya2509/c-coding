#include <stdio.h>
void main(){
    float bor, eor, travel, reim;
    printf("MILEAGE REIMBURSEMENT CALCULATOR\n");
    printf("Enter beginning odometer reading=> ");
    scanf("%f",&bor);
    printf("Enter ending odometer reading=> ");
    scanf("%f", &eor);
    travel=eor-bor;
    reim=travel*0.35;
    printf("You traveled %0.2f miles",travel);
    printf("   At $0.35 per mile,\nyour reimbursement is $%0.2f.",reim);
}
