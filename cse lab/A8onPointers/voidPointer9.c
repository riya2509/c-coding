#include <stdio.h>
void main()
{
int a=10;
float b=35.75;
char ch= 'a';
void *ptr; //void pointer
ptr=&a; // Assigning address of integer to void pointer.
printf("The value of integer variable is= %d\n",*( (int*) ptr) );
ptr=&b; // Assigning address of float to void pointer.
printf("The value of float variable is= %f\n",*( (float*) ptr) );
ptr=&ch; // Assigning address of char to void pointer.
printf("The value of char variable is= %c\n",*( (char*) ptr) );
}
