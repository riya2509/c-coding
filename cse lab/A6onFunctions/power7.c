#include<stdio.h>
void power(int x,int y)
{
int ans = 1, i;
for(i=1; i<=y; i++)
ans = ans*x;
printf("  %d^%d : %d", x, y, ans);
}
void main()
{
int x,y;
printf("\nEnter Value of x : ");
scanf("%d", &x);
printf("\nEnter Value of y : ");
scanf("%d", &y);
power(x,y);
}