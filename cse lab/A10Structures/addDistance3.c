#include<stdio.h>
struct distance
{   
int feet;
float inch;
}
main()
{
struct distance d1,d2,sum;
printf("Enter First Distance: ");
printf("Enter feet: ");
scanf("%d",&d1.feet);
printf("Enter inch: ");
scanf("%f",&d1.inch);

printf("Enter Second Distance: ");
printf("Enter feet: ");
scanf("%d",&d2.feet);
printf("Enter inch: ");
scanf("%f",&d2.inch);

sum.feet=d1.feet+d2.feet;
sum.inch=d1.inch+d2.inch;

if(sum.inch>=12.0)
{
sum.inch=sum.inch-12.0;
++sum.feet;
}
printf("\nSum of distances = %d feet and %.2f inches",sum.feet,sum.inch);
}