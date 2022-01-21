#include <stdio.h>
void reverse(char *p,char *q)
{

int i=0,count=0;
while(*(p+i)!='\0')
{
count++;
i++;
}
for(i=0;i<count;i++)
(q+count-1-i)=(p+i);
*(q+i)='\0';

}
void main()
{
char name[20],rev[20];
printf("Enter a string : ");
scanf("%[^\n]s",name);
reverse(name,rev);
printf("Reverse of string is : %s",rev);
}