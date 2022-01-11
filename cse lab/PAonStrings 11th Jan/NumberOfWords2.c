#include <stdio.h>
#include <string.h>
void main()
{
char str[100];
int i, wrd;	
printf("Input the string : ");
gets(str);		
i = 0;
wrd = 1;
// loop till end of string 
while(str[i]!='\0')
{
if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
{
wrd++;
}
i++;
}
printf("Total number of words in the string is : %d\n", wrd);
}
