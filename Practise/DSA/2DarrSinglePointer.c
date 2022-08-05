/*Dynamic memory allocation of 2D array using a single pointer*/

#include <stdio.h>
#include <stdlib.h>
void main(){
   int c,r,*p;
   printf("Enter the number of rows and columns:");
   scanf ("%d %d",&r,&c);
   p= (int *)malloc ((r*c)*sizeof(int));
   printf("Enter the elements:\n");
   for (int i=0;i<r*c;i++){
    scanf("%d",&p[i]); 
    p[i]=i+1;
    printf("%d",p[i]);
    if((i+1)%c==0)
    printf("\n");
   }
free(p);
}