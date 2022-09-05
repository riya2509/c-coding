#include <stdio.h>
int stack[100], i, j, n, choice = 0, top = -1;
void push();
void pop();
void show();
void main()
{
    printf("Enter the number of elements in the stack\n");
    scanf("%d", &n);
    printf("----------Stack operations using array---------\n");
    while (choice != 4)
    {
        printf("Choose one from the below options...\n");
        printf("1.Push\n2.Pop\n3.Show\n4.Exit");
        printf("Enter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                show();
                break;
            }
            case 4:
            {
                printf("Exiting...\n");
                break;
            }
            default:
            {
                printf("Please enter valid choice\n");
            }
        };
    }
}
void push()
{
    int val;
    if(top==n)
    printf("Overflow\n");
    else{
        printf("Enter the value?\n");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;

    }
}
void pop()
{
    if(top==-1)
    printf("Underflow\n");
    else top=top-1;
}
void show()
{
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
    if (top==-1)
    {
        printf("Stack is empty");
    }
}