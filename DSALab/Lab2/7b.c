/*7. Define a structure for representing a point in two-dimensional Cartesian co-ordinate
system. Now, write a C program to perform the following tasks:
b. Compute the area of a triangle, given the co-ordinates of its three vertices.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef struct
{
    float x;
    float y;
} point; // alias_name

typedef struct
{
    point ver1; // point is structure data type and ver1 is structure variable
    point ver2;
    point ver3;
} triangle;

float area(triangle t)
{
    return (fabs((t.ver2.x - t.ver1.x) * (t.ver3.y - t.ver1.y) -
                 (t.ver2.y - t.ver1.y) * (t.ver3.x - t.ver1.x)) /
            2);
}
void main()
{
    triangle t;
    float a;
    triangle *p;
    int n, i;
    printf("Enter the number of points:\n");
    scanf("%d", &n);
    p = (triangle *)malloc(n * sizeof(triangle));
    for (i = 0; i < n; i++)
    {
        printf("Enter the first point:\n");
        scanf("%f %f", &t.ver1.x, &t.ver1.y);
        printf("Enter the second point:\n");
        scanf("%f %f", &t.ver2.x, &t.ver2.y);
        printf("Enter the third point:\n");
        scanf("%f %f", &t.ver3.x, &t.ver3.y);
    }
    a = area(t);
    printf("The area of the triangle is: %f", a);
    free(p);
}