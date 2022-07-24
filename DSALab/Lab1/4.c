/*4. Rewrite the program 3 using user define functions.
a. Func1(): Take the input for a list of N students from the user.
b. Display(): Print the details of each student.
[Hint: use structure as parameter and or return type]*/

#include <stdio.h>
struct student
{
    char name[20];
    int rollno;
    float marks;
};
void PassBy_value(struct student stu[] , int n );

void main()
{
    int i,n;
    printf("Enter how many records u want to store :: ");
    scanf("%d", &n);
    struct student stuarr[n] ; 
    printf("Enter name, roll no. and marks Below :: \n");
    for ( i = 0; i < n; i++)
    {
        printf("\nEnter %d record :: \n", i + 1);

        printf("Enter Name :: ");
        scanf("%s", stuarr[i].name);
        printf("Enter RollNo. :: ");
        scanf("%d", &stuarr[i].rollno);
        printf("Enter Marks :: ");
        scanf("%f", &stuarr[i].marks);
    }
    PassBy_value(stuarr , n);
}
void PassBy_value(struct student stu[] , int n )
{
    int i ;  
    printf("\n\tName\tRollNo\tMarks\t\n");
    for ( i = 0; i < n; i++)
        printf("\t%s\t%d\t%.2f\t\n", stu[i].name, stu[i].rollno, stu[i].marks);
}