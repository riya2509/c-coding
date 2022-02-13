#include<stdio.h>
struct distance
{   
int Km;
float m;
}
main()
{
struct distance d1,d2,sum;
printf("Enter First Distance: ");
printf("Enter Kilometer: ");
scanf("%d",&d1.Km);
printf("Enter meters: ");
scanf("%f",&d1.m);

printf("Enter Second Distance: ");
printf("Enter Kilometer: ");
scanf("%d",&d2.Km);
printf("Enter meters: ");
scanf("%f",&d2.m);

sum.Km=d1.Km+d2.Km;
sum.m=d1.m+d2.m;

if(sum.m>=1000)
{
sum.m=sum.m-1000;
++sum.Km;
}
printf("\nSum of distances = %d Km and %.2f meters",sum.Km,sum.m);
}