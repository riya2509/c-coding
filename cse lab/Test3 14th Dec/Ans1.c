#include <stdio.h>
#include <stdlib.h>
int main()
{
printf("Enter number of elements : ");
int n;
scanf("%d",&n);
int a[n];
int i;
printf("Enter elements : ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter number lesser than half the array length : ");
int k;
scanf("%d",&k);
if(k>(n/2))
{ printf("Invalid input");
exit(0);
}
for(i=0;i<n;i=i+k)
{
if(n-i<k)
{
for(int q=i;q<n;q++)
{printf("%d\t",a[q]);}
break;
}
for(int j=i+k-1;j>=i;j--)
{
printf("%d\t",a[j]);
}
}
}

