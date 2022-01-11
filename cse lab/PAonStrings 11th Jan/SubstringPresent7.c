#include<conio.h>
#include<stdio.h>
void main()
{
int i=0,j=0;
char str[50],substr[50];
printf("Enter the string : ");
gets(str);
printf("Enter substring : ");
gets(substr);
while(str[i]!='\0' && substr[j]!='\0')
{
if(str[i]!=substr[j])
{
i++;
j=0;
}
else
{
j++;
i++;
}
}
if(substr[j]=='\0')
printf("substring Found");
else
printf("Not found");
}