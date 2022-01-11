#include<stdio.h>
#include<string.h>
int main()
{
char *names[]={"bella","riya","dolly","fenny","abhi"};
char *temp;
printf("original :%s %s ",names[1],names[3]);
temp=names [1];
names[1]=names[3];
names[3]=temp;
printf("\nNew : %s %s ", names[1], names[3]);
return 0;
}