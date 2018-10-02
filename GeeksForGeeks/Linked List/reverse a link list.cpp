#include<bits/stdc++.h>
using namespace std;
#define nodeptr Node*
struct Node
{
    int data;
    nodeptr next;
};

// function to reverse a Link List
void reverse(nodeptr *head)
{

    // Base Case
    if(*head == NULL) return;

    nodeptr cur = *head;
    nodeptr prev = NULL;
    nodeptr next = NULL;
    while(cur!=NULL)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    *head = prev;
}

// function to push a node in a Link List
void push(nodeptr* head_ref, int new_data)
{
    struct Node* new_node =
            (struct Node*) malloc(sizeof(struct Node));
     new_node->data  = new_data;
     new_node->next = (*head_ref);
     (*head_ref)    = new_node;
}


//fucntion to print the link List
void printList(nodeptr head)
{
    if(head == NULL) return;
    nodeptr cur = head;
    while(cur!=NULL)
    {
        std::cout << cur->data << "->";
        cur = cur->next;
    }
    std::cout << "NULL";
}

// Main() function
int main()
{
    struct Node* head = NULL;

    // creating link list 85->15->4->20->NULL
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 85);

    // Link List before reversing
    std::cout << "Original List is: ";
    printList(head);

    std::cout <<'\n';
    // calling the reverse function
    reverse(&head);

    // Link list after calling the reverse function
    std::cout << "Reversed List is: ";
    printList(head);
    return 0;
}
