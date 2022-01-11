#include <stdio.h>
void main()
{
char str[100]; 
int l= 0;	
printf("Input the string : ");
gets(str);
printf("The characters of the string are : \n");
while(str[l]!='\0')
{
printf("%c  ", str[l]);
l++;
}
printf("\n");
}
