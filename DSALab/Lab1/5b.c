/*5. Write a C program to do the following:
b. Declare a 2d array of size n*n Access the element of it using a pointer.*/

#include <stdio.h>
int main()
{

    int m;
    printf("\nEnter the size(n * n) of which you want the array : \n");
    scanf("%d", &m);
    int array[m][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Value[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    int *p;
    p = &array[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", *(p + i * m + j));
        }
        printf("\n");
    }
    return 0;
}