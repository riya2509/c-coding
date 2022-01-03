#include <stdio.h>
void print_array(int ar[] )
{
    printf("The array is : \n");
    int *p;
    p=&ar[0];
    while(p<=&ar[5])
    {
        printf("%d\t",*p);
        p=p+1;
    }
}
void main()
{
    printf("Enter 6 elements : \n");
    int a[6];
    for(int i=0;i<6;i++)
    scanf("%d", &a[i]);
    
    print_array(a);
}

