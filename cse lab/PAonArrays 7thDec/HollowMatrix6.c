#include <stdio.h>

int main()
{
    
    printf("Enter number of rows : ");
    int n;
    scanf("%d",&n);
    int a[n][n];
    int c=1;
    printf("Enter %d elements : ",n*n);
    int i , j , k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d. ",c++);
            scanf("%d",&a[i][j]);
        }
    }  
    
int f=0;
for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
            
        }
        printf("\n");
    }  
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                if(a[i][j]!=0)
                {f++;}
                break;
            }
            
        }
        
    }  
    if(f==0)
    printf("The matrix is a hollow matrix");
    else
    printf("The matrix is not a hollow matrix");

    return 0;
}