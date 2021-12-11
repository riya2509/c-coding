#include <stdio.h>

int main()
{
    printf("Enter 25 elements : ");
    int c=1;
    int a[5][5];
    int i , j , k;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d. ",c++);
            scanf("%d",&a[i][j]);
        }
    }  
    
int max=a[0][0];
for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d\t",a[i][j]);
            if(a[i][j]>max)
            max=a[i][j];
        }
        printf("\n");
    }  
    printf("The largest element in the matrix is : %d",max);
    return 0;
}