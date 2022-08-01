// using an array of pointer malloc
#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#define N 20
#define M 10
int main(){
   char word[N] , *w[M];
   int i,n;
   printf("Enter the array elements:\n");
   scanf ("%d",&n);
   printf("Enter the words:\n");
   for (i=0; i<n;i++){
    scanf("%s",word);
    w[i]=(char *)malloc((strlen(word)+1)*sizeof(char));
    strcpy(w[i],word);
   }
   for (i=0; i<n;i++)
   printf("w[%d]=%s\n",i,w[i]);
  free(w[i]);
  return 0;
}