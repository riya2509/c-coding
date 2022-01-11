#include <stdio.h>
#include <string.h>
#define str_size 100 
void main()
{
char str[str_size];
int ch_fre[255];//Maximum number of characters to be allowed
int i = 0, max;
int ascii;	
printf("Input the string : ");
gets(str);
for(i=0; i<255; i++)  //Setting frequency of all characters to 0
{
ch_fre[i] = 0;
}
//Reading for frequency of each characters 
i=0;
while(str[i] != '\0')
{
ascii = (int)str[i];
ch_fre[ascii] += 1;
i++;
}
max = 0;
for(i=0; i<255; i++)
{
if(i!=32)
{
if(ch_fre[i] > ch_fre[max])
max = i;
}
}	
printf("The Highest frequency of character '%c' appears number of times : %d \n\n", max, ch_fre[max]);
}
