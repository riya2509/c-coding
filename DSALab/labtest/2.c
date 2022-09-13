#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};
//pushing a new node on the front of the list. 
void push (Node** head_ref, int new_data)
{
 
    /* allocating node */
    Node* new_node = new Node();
    /* puting in the data */
    new_node->data = new_data;
    /* linking the old list off the new node */
    new_node->next = (*head_ref);
    /* move the head to point to the new node */
    (*head_ref) = new_node;
}
/* Recursively count number of nodes in linked list */
int getCount(Node* head)
{
if (head == NULL) {
        return 0;
}
// Counting this node plus the rest of the list
    else {
        return 1 + getCount(head->next);
    }
}
/* Driver program to test count function*/
int main()
{
    // Starting with the empty list 
    Node* head = NULL;
    /* Using  push() to construct below list
    1->2->1->3->1 */

    push(&head,1);
    push(&head,3);
    push(&head,1);
    push(&head,2);
    push(&head,1);
    // Checking the count function 
    cout<<"Count of nodes is"<<getCount(head);
    return 0;
}

