#include <stdio.h>
void main(){
    char name [10],branch[10],gender[10],HomeCity[10];
    long int roll, JEERank, PhoneNo;
    printf("Enter your name\n");
    scanf("%s",name);
    printf("Enter your branch\n");
    scanf("%s",branch);
    printf("Enter your gender\n");
    scanf("%s",gender);
    printf("Enter your Home City\n");
    scanf("%s",HomeCity);
    printf("Enter your roll number\n");
    scanf("%ld",&roll);
    printf("Enter your JEE Rank\n");
    scanf("%ld",&JEERank);
    printf("Enter your Phone number\n");
    scanf("%ld",&PhoneNo);
    printf("My name is %s\n Branch:%s\n Gender:%s\n Home City:%s\n Roll Number:%ld\n JEE Rank:%ld\n Phone Number:%ld",name,branch,gender,HomeCity,roll,JEERank,PhoneNo);
    }