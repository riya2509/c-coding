#include <stdio.h>
struct patient {
    char first_name[50];
    int patient_number;
    int id;
    } s[50];

int main() {
    int x, i;

    printf("Enter the number of patients: ");
    scanf("%d", &x);
    
    for (i = 0; i < x; i++) {
       s[i].patient_number = i + 1;
       printf("\nInformation for Patient Number: %d\n", s[i].patient_number);

        printf("Enter the first name: ");
        scanf("%s", &s[i].first_name);


        printf("Enter id : ");
        scanf ("%d",&s[i].id);
    }

    for (i = 0; i < x; i++) {
        printf("\nThe Patient Number: %d\n", i + 1);
        
        printf("The First Name: ");
        printf(s[i].first_name);

        printf("\npatient's id : %d\n", s[i].id);
        
    }
    return 0;
}