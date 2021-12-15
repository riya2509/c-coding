#include<stdio.h>
int main()
{
    int* p,c;
    c=5;
    p=&c;
    printf("%d   ", *p);
    printf("  %p  %p  ",p,c);
    printf("  %d ",p);

    int* pc= &c;
    printf("%d",*pc);
    return 0;
}