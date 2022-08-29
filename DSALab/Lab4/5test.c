#include <stdio.h>
#include <stdlib.h>
// polynomial node structure
struct node
{
    int co, exp;
    struct node *next;
};
struct node *create(struct node *head, int cop, int exp) // Creating a polynomial
{
    struct node *temp, *flag;
    // If polynomial is empty making the node the head node
    if (head == NULL)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->co = co;
        temp->exp = exp;
        temp->next = NULL;
        head = temp;
    }
    else
    {
        // else going to the last node and appending
        temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        flag = (struct node *)malloc(sizeof(struct node));
        flag->co = co;
        flag->exp = exp;
        temp->next = NULL;
        temp->next = flag;
    }
    return head;
}
// Adding two polynomials
struct node *PolyAdd(struct node *p1, struct node *p2, struct node *sum)
{
    // Copying two polynomials and declaring a variable r to store the sum
    struct node *poly1 = p1, *poly2 = p2, *r;
    // if polynomial 2 is null seting polynomial 1 as sum
    if (poly1 != NULL && poly2 == NULL)
    {
        sum = poly1;
        return sum;
    }
    // if polynomial 1 is null setting the polynomial 2 as sum
    else if (poly2 != NULL && poly1 == NULL)
    {
        sum = poly2;
        return sum;
    }
    // if both polynomial 1 and polynomial 2 is not NULL
    while (poly1 != NULL && poly2 != NULL)
    {
        // if sum is empty initialising sum with a node structure
        // setting r = sum
        if (sum == NULL)
        {
            sum = (struct node *)malloc(sizeof(struct node));
            r = sum;
        }
        // else adding a new node structure at the end of r to store sum
        else
        {
            r->next = (struct node *)malloc(sizeof(struct node));
                r = r->next;
        }
        // If exponent of current node of polynomial 1 is greater than that of polynomial 2
        // then adding it to sum
        if (poly1->exp > poly2->exp)
        {
            r->co = poly1->co;
            r->exp = poly1->exp;
            poly1 = poly1->next;
        }
        // If exponent of current node of polynomial 2 is greater than that of polynomial 1
        // adding it to sum
        else if (poly1->exp < poly2->exp)
        {
            r->co = poly2->co;
            r->exp = poly2->exp;
            poly2 = poly2->next;
        }
        // if exponent of current node of polynomial 1 is equal to that of polynomial 2
        // adding the sum of their coefficient to the sum
        else if (poly1->exp == poly2->exp)
        {
            r->co = poly2->co + poly1->co;
            r->exp = poly1->exp;
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }
    // if polynomial 1 is non empty
    // adding remaining nodes to the sum
    while (poly1 != NULL)
    {
        r->next = (struct node *)malloc(sizeof(struct node));
        r = r->next;

        r->co = poly1->co;
        r->exp = poly1->exp;
        poly1 = poly1->next;
    }
    // if polynomial 2 is non empty
    // adding remaining nodes to the sum
    while (poly2 != NULL)
    {
        r->next = (struct node *)malloc(sizeof(struct node));
        r = r->next;

        r->co = poly2->co;
        r->exp = poly2->exp;
        poly2 = poly2->next;
    }
    // setting pointer of last node to NULL
    r->next = NULL;
    // returning the head node of the sum
    return sum;
}
// Displaying Polynomial
void display(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d^%d+", temp->co, temp->exp);
        temp = temp->next;
    }
    printf("\n");
}
void main()
{
    //to store poly1 poly2 and sum
    struct node *p1= NULL, *p2=NULL ,*sum=NULL;
    int ch,co,exp;
    int loop=1;
    while(loop){
        printf("1.Add to poly 1\n");
        printf("2.Add to poly 2\n");
        printf("3. Perform addition\n");
        printf("4. Exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1: printf("Enter coefficient \n");
            scanf("%d",&co);
            printf("Enter exponent\n");
            scanf("%d",&exp);
            p1=create(p1,co,exp);
            break;
            case 2:printf("Enter coefficient \n");
            scanf("%d",&co);
            printf("Enter exponent\n");
            scanf("%d",&exp);
            p1=create(p2,co,exp);
            break;
            case 3:
            sum=PolyAdd(p1,p2,sum);
            printf("Polynomial 1 \n");
            display(p1);

            printf("Polynomial 2\n");
            display(p2);
            printf("sum");
            display(sum);
            break;
            case 4:
            loop=0;
            break;
            default: printf("wrong choice! Re-enter\n");
            break;

        }
    }
}
//exit