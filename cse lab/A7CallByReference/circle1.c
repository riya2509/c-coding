#include <stdio.h>
void areaperi( int *a , double *area , double *peri)
{
    *area=3.14 * *a * *a;
    *peri=2* 3.14 * *a;
}
void main()
 {
    int n; int *p;
    printf("Enter the radius of a circle : ");
    scanf("%d",&n);
    double ar; double pe;
    areaperi(&n, &ar , &pe);
    printf("The area of the circle is : %f / and it's perimeter     :%f",ar,pe);
 }