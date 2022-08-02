#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int kark(char *);
int main()
{
    char *s;
    int count;
    
    printf("give the length of the word:");
    scanf("%d",&count);
    s=(char *)malloc(count+1);
    printf("give word:");
    scanf("%s",s);

    if(kark(s))/*==1)*/
        printf("\n\tThe word is palindromic.\n");
    else
        printf("\n\tThe word is NOT palindromic.\n");

    return 0;
}

int kark(char *x)
{
    int i,j,flag;
   
    flag=1;
     i=0;
    j=strlen(x)-1;
    while((flag==1)&&(x[i]!='\0'))
    {
        
        if(x[i]==x[j])
        flag=1;
        else{
            flag=0;}
        j--;
        i++;
    }

    return flag;

}