/*6. Let A be square dynamic matrix. WAP by using appropriate user defined functions
for the following:

a) Find the number of nonzero elements in A
b) Find the sum of the elements above the leading diagonal.
c) Display the elements below the minor diagonal.
d) Find the product of the diagonal elements.*/

#include <stdio.h>
#include <stdlib.h>
void D1(int *(p)[n], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (*(*(p + i) + j != 0))
                printf("%d\n", *(*(p + i) + j));
        }
    }
}
void D2(int *(p)[n], int n)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j)
            {
                sum+=*(*(p+i)+j);
            }
        }
    }
    printf("Leading diagonal sum= %d\n",sum);

}
void D3(int *(p)[n], int n)
{
   int total=0;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i+j)==((n+1)-2))
            {
                total=total+*(*(p+i)+j);
            }
            

        }
    }
    
    printf("Minor digonal Total : %d\n",total);

}
void D4(int *(p)[n], int n)
{
 int pro=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j)
            {
                pro*=*(*(p+i)+j);
            }
        }
    }
    printf("Leading diagonal product= %d\n",pro);
   
}



int main()
{
    int i, j, n ;
    printf("Enter the size of nxn array:\n");
    scanf("%d", &n);
  int (*p)[n]= (int*)malloc(n * n * sizeof(int));
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &p[i][j]);
        }
    }
    D1(p, n);
    D2(p, n);
    D3(p, n);
    D4(p, n);
    return 0;
}