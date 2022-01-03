#include <stdio.h>
int sum(int a[])
{
    int *p; p=&a[0]; int sum=0;
    while(p<=&a[4])
    {
        sum=sum+ *p;
        p=p+1;
    }
    return sum;
}
int product(int a[])
{
    int *p; p=&a[0];
    int pro=1;
    while(p<=&a[4])
    {
        pro=pro* *p;
        p=p+1;
    }
    
    return pro;
}
int avg(int a[])
{
   
    int s=sum(a);
    return (s/5);
}
void main()
{
    int a[5];
    printf("Enter 5 elements : ");
    for(int i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("The sum of all the elements : %d\n",sum(a));
    printf("The product of all elements : %d\n",product(a));
    printf("The average of all elements : %d\n",avg(a));
}