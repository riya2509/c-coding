//initialising 2D array from pointer to pointer
#include <stdio.h>
#include <stdlib.h>
void main(){
    int **p,row=3,col=5;
    p=(int **)malloc(row*sizeof(int *));
    for(int i=0; i<row; i++){
    p[i]=(int *)malloc(col*sizeof(int));
    printf("%d",p[i]);
    }
    free(p);
}