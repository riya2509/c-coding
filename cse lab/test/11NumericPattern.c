#include <stdio.h>
void main()
{
    int i, j, n;
    printf("Enter rows: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            // Printing numbers for odd row
            for(j=1; j<=i; j++)
            {
                printf("%d", j);
            }
        }
        else
        {
            // Printing numbers for even row
            for(j=i; j>=1; j--)
            {
                printf("%d", j);
            }
        }
        printf("\n");
    }
}