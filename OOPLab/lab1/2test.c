#include <stdio.h>
struct student
{
        char name[50];
        int rollno;
        float marks;
}s[100];
void main()
{
        int i, n, rn, k;
        struct student s[100];
        printf("Enter how many records u want to store :: ");
        scanf("%d", &n);
       // struct student s[n];
        printf("Enter name, rollno no. and marks Below :: \n");

        for (i = 0; i < n; i++)
        {
                printf("\nEnter %d record :: \n", i + 1);

                printf("Enter Name :: ");
                scanf("%s", s[i].name);
                printf("Enter rollnoNo. :: ");
                scanf("%d", &s[i].rollno);
                printf("Enter Marks :: ");
                scanf("%f", &s[i].marks);
        }
        printf("Enter rollno number to search student record:\n");
scanf("%d",&rn);

for(i=0;i<n;i++)
{
if(s[i].rollno==rn)
{
k=i;//for finding position of student

printf("\n Record found at position no %d \n",k+1);
printf("\tName:%s\n ",s[k].name);
printf("\t rollno number: %d\n",s[k].rollno);
printf("\t Marks: %.1f\n\n",s[k].marks);
}

}
// use bubble sort and sort the array 
}
