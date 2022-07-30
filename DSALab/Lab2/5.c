#include <stdio.h>
#include <stdlib.h>

void printNGE(int p[], int n)
{
    int next, i, j;
    for (i = 0; i < n; i++)
    {
        next = -1;
        for (j = i + 1; j < n; j++)
        {
            if(p[i]<p[j]){
                next=p[j];
                break;
            }
        }
        printf("%d  -----  %d\n",p[i],next);
    }
}

int main()
{
    int i, n, *p;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &p[i]);
    printNGE(p, n);
    return 0;
}