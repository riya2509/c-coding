#include <stdio.h>
void main(){
    int n,i,pr=0;
    printf("Enter the limit to print the series ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    pr=pr*2+1;
    printf(" %d",pr);
    }
}