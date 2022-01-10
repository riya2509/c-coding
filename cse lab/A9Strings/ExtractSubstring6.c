#include <stdio.h>
void main() 
{
char str1[100], str2[100];
int pos, l, c = 0;   
printf("Input the string : ");
gets(str1); 
printf("Input the position to start extraction :");
scanf("%d", &pos);   
printf("Input the length of substring :");
scanf("%d", &l); 
while (c < l) 
{
str2[c] = str1[pos+c-1];
c++;
}
str2[c] = '\0'; 
printf("The substring retrieve from the string is : \" %s \" \n", str2); 
}
