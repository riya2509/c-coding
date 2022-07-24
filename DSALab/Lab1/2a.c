/*2. Define a structure for representing a point in two-dimensional Cartesian co-ordinate
system. Now, write a C program to perform the following tasks:
a. Compute the distance between two given points.*/

#include<stdio.h>
#include <math.h>
 typedef struct {
    float x;
    float y;
}point;
point a,b;
void main(){
    float d;
    printf("Enter the first point :");
    scanf("%f %f",&a.x, &a.y);
    printf("Enter the second point :");
    scanf("%f %f",&b.x, &b.y);
    d= sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
    printf("The distance between the two points is:%f",d);
}