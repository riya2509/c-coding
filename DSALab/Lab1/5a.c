/*5. Write a C program to do the following:
a. Access the element of the array using a pointer variable.*/

#include<stdio.h>
void main()
{
    int data[5],i,n;
    printf("Enter elements:");
    for(i=0;i<5;++i)
    scanf("%d", data+i);

     printf("You entered: \n");
    for (int i = 0; i < 5; ++i)
        printf("%d\n", *(data + i));
}
     
    
