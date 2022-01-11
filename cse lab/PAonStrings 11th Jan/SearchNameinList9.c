#include<stdio.h>
#include<string.h>
void main()
{
char masterlist [6][10]={"riya","emily","john","emma","fenny","dolly"};
int i, flag, a;
char yourname [10];
printf("Enter your name : ");
scanf("%s",yourname);
flag=0;
for(i=0;i<=5;i++)
{
a=strcmp(&masterlist[i][0],yourname);
if (a==0)
{
printf("you are invited : ");
flag=1;
break;
}
}
if (flag==0)
printf("you are not invited ");
}