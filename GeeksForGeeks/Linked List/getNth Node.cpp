#include<bits/stdc++.h>
using namespace std;
#define nodeptr node*
struct node
{
    int data;
    nodeptr next;
};

int getNthNode(nodeptr head, int key)
{
    int count = 0;
    nodeptr cur = head;
    while(cur!=NULL && count<key)
    {
        count++;
        cur = cur->next;
    }
    nodeptr t = cur;
    return(t->data);
}


// function to create a node
nodeptr newNode(int data)
{
    nodeptr nptr  = new node;
    nptr->data = data;
    nptr->next = NULL;
    return nptr;
}

// function to push node in a link list
void push(struct node** head_ref, int new_data)
{
    struct node* new_node =
        (struct node*) malloc(sizeof(struct node));

    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}

// function to print a link list
void printList(nodeptr head)
{
    while(head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main()
{
    nodeptr head = NULL;
    push(&head, 1);
    push(&head, 4);
    push(&head, 1);
    push(&head, 12);
    push(&head, 1);

    // Before function call
    printf("\nLinked list before calling swapNodes() ");
    printList(head);


    //calling the function
    printf("\nElement at index 3 is %d", getNthNode(head, 3));

}
