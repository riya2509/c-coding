#include <stdio.h> 
#include<string.h> 
int main(void)  
{ 
char c[100]; 
printf("Enter a string\n");
scanf("%s",c); 
int l = strlen(c)-1; 
printf("%c",c[0]); 
return 0; 
} 