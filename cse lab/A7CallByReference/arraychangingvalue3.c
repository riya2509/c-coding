#include <stdio.h>
int* change( int *p2, int a[])
{
    int *p;
    p=&a[0]; int temp=0;
    while(p<=&a[2])
    {
        if(p==&a[1])
        {
            temp= *p;
            *p= *p2;
            *p2=temp;
            
        }
        p=p+1;
    }
    return a;
}
void main()
{
    int a[3];
    a[0]=100;
    a[1]=20;
    a[2]=60; int num=800;
    change(&num, a);
    for(int i=0;i<3;i++)
    printf("%d\t",a[i]);
}