#include <stdio.h>
void main(){
    int m, n, side1, side2, hypo;
    printf("Enter two positive integers m&n where m>n\n");
    scanf("%d",&m);
    scanf("%d",&n);
    side1 = (m*m)- (n*n);    
    side2 = 2*m*n;
    hypo = (m*m)+(n*n);
    printf("m=%d & n=%d\nside1=%d\nside2=%d\nhypotenuse=%d", m, n, side1, side2, hypo);
}