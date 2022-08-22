//Write a program in C to determine whether the given matrix is a sparse matrix or not.

//A sparse matrix  is a matrix which has more zero elements tha non-zero elements

#include<stdio.h>
void main()
{
    static int arr1[10][10];
    int i, j ,r , c;
    int no_ofZero=0;
    printf("Determine whether a matrix is a sparse matrix or not\n");
    printf("enter the numebr of rows\n");
    scanf("%d",&r);
    printf("Enter the number of columns:\n");
    scanf("%d",&c);
    printf("Input elements in the first matrix\n");
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("element [%d[[%d]:",i,j);
            scanf("%d",&arr1[i][j]);
            if(arr1[i][j]==0)
            {
                ++no_ofZero;
            }
        }
    }
    if(no_ofZero>((r*c)/2))
    {
        printf("The given matrix is sparse matrix\n");

    }
    else 
    printf("The given matrix is not a sparse matrix\n");
    printf("There are %d number of  zeros in the matrix \n",no_ofZero);
}