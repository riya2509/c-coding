#include <stdio.h>
#include <math.h>
int count(int x)
{
    if(x!=0)
    return 1+ count(x/10);
    else
    return 0;
}
int main()
{
    printf("Enter a number: ");
    int n; scanf("%d",&n);
    int c = count(n); 
    int a[c][c];
    for(int i=0;i<c;i++)
    {
        int copy=c; int copy2=n;
        for(int j=0;j<c;j++)
        {
            a[i][j]= copy2/(int)pow(10,copy-1);
            copy2=copy2%(int)pow(10,copy-1);
            copy--;
        }
        n=((n%(int)pow(10,c-1))*10)+(n/(int)pow(10,c-1));
    }
    
    for(int k=0;k<c;k++)
    {
        for(int f=0;f<c;f++)
        {
            printf("%d\t",a[k][f]);
        }
        printf("\n");
    }
    return 0;
}