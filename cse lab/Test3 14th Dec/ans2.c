
#include <stdio.h>
int main(){
int m,n,i,j,a[10][10];
printf("Enter the no. of rows: ");
scanf("%d",&m);
printf("Enter the no. of columns: ");
scanf("%d",&n);
for(i=0;i<m;i++){
for(j=0;j<n;j++){
printf("Enter number: ");
scanf("%d",&a[i][j]);
}
}
printf("\n");
for(i=0;i<m;i++){
for(j=n-1;j>=0;j--){
printf("%d ",a[i][j]);
}
printf("\n");
}
printf("\n");
for(i=0;i<m;i++){
for(j=0;j<n;j++){
printf("%d ",a[i][j]);
}
printf("\n");
}    
return 0;
}