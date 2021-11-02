#include <stdio.h>
void main(){
    int n,i,j,check;
    printf("Enter the limit till which the prime numbers will be printed ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        check=0;
        for(j=1;j<=n;j++){
        if(i%j==0)
        check++;
        }
        if (check==2)
        printf(" %d",i);
        }
    }
    