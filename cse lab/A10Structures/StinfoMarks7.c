#include <stdio.h>
#include <string.h>
struct details 
{
    char name[50];
    int roll;
    char gender[50];
    int marks[5];
};
int addsum(int m[])
{
    int sum=0;
    for(int i=0;i<5;i++)
    sum=sum+ m[i];
    
    return sum;
}
int main()
{
    printf("Enter number of students : "); int n;
    scanf("%d",&n);
    struct details arr[n];
    int c=1; int i ;
    for( i=0;i<n;i++)
    {
        printf("Student %d Name : ",c);
     scanf("%s",arr[i].name);
        printf("Student %d Roll Number : ",c);
        scanf("%d",&arr[i].roll);
        printf("Student %d Gender : ",c);
        scanf("%s",arr[i].gender);
        
        printf("Student %d -> Marks in Subject 1 : ",c);
        scanf("%d",&arr[i].marks[0]);
        printf("Student %d -> Marks in Subject 2 : ",c);
        scanf("%d",&arr[i].marks[1]);
        printf("Student %d -> Marks in Subject 3 : ",c);
        scanf("%d",&arr[i].marks[2]);
        printf("Student %d -> Marks in Subject 4 : ",c);
        scanf("%d",&arr[i].marks[3]);
        printf("Student %d -> Marks in Subject 5 : ",c++);
        scanf("%d",&arr[i].marks[4]);
        
    } c=1;  
   for(i=0;i<n;i++)
   {
       printf("----------------Student %d----------------\n",c++);
       printf("Name : %s\n",arr[i].name);
       printf("Roll No. : %d\n",arr[i].roll);
       printf("Gender : %s\n",arr[i].gender);
       int tmarks;
        tmarks=addsum(arr[i].marks);
       printf("Marks secured /500 : %d\n",tmarks);
       printf("-------------------------------------------\n");
   } int sub[5]={0,0,0,0,0};  
   for(i=0;i<n;i++)
   { 
       for(int j=0;j<5;j++)
       {
           if(arr[i].marks[j]<40)
           {
               
           sub[j]++;}
        }
    }
   printf("Number of students who failed in each subject:\n");
   for(i=0;i<5;i++)
   {
       printf("Subject %d : %d\n",i+1,sub[i]);
   }
    return 0;
}