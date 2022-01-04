#include<stdio.h>
void swapValue(int *a,int *b);
int main()
{
int a = 100;
int b= 200;
printf("First number is %d\n",a);
printf("Second Number is %d\n",b);
swapValue(&a,&b);
printf("After swap function \n");
printf("%d\n%d",a,b);
}
void swapValue(int *x,int *y){
int temp;    
temp = *x; 
*x=*y;
*y=temp; 
}
