#include <stdio.h>
void main()
{
int n,i,j,k;
printf("\nEnter how many rows => \n");
scanf("%d",&n);
//printf("\n");
for(i=1;i<=n;i++)
{
for(k=1;k<=i;k++)
printf("* ");
printf("\n");
}
}